#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24100;
unsigned char var_4 = (unsigned char)125;
signed char var_5 = (signed char)-76;
signed char var_9 = (signed char)-15;
signed char var_10 = (signed char)111;
signed char var_11 = (signed char)-33;
int zero = 0;
unsigned char var_12 = (unsigned char)12;
unsigned char var_13 = (unsigned char)160;
int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -531912143;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
