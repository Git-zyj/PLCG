#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)235;
int var_5 = 180002306;
signed char var_8 = (signed char)-68;
unsigned long long int var_9 = 2284896970281986918ULL;
int zero = 0;
unsigned long long int var_10 = 7430969521452179007ULL;
long long int var_11 = 3896742319746884387LL;
unsigned char var_12 = (unsigned char)15;
short arr_0 [18] ;
unsigned long long int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)11867;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 4284810915140743016ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
