#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6929163708410726514ULL;
unsigned long long int var_2 = 16852355432859545034ULL;
signed char var_8 = (signed char)-16;
unsigned char var_9 = (unsigned char)147;
long long int var_10 = -4053486824653397493LL;
signed char var_12 = (signed char)88;
int zero = 0;
unsigned char var_16 = (unsigned char)237;
unsigned char var_17 = (unsigned char)45;
unsigned char var_18 = (unsigned char)213;
signed char var_19 = (signed char)-93;
unsigned char var_20 = (unsigned char)158;
unsigned long long int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 3628151110385167444ULL : 7746366132308404588ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
