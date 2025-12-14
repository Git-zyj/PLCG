#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5266583738541735304LL;
int var_10 = 1189523217;
signed char var_17 = (signed char)107;
int zero = 0;
signed char var_18 = (signed char)-98;
unsigned char var_19 = (unsigned char)234;
long long int var_20 = 7746958086724997698LL;
unsigned char var_21 = (unsigned char)38;
signed char var_22 = (signed char)-20;
unsigned int arr_0 [16] ;
short arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1955575075U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-17809;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
