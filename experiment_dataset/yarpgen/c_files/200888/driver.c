#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 7515824763612160581ULL;
int var_8 = 826281874;
int var_11 = -1514081195;
unsigned char var_14 = (unsigned char)96;
long long int var_18 = -1964687146180036447LL;
int zero = 0;
unsigned char var_19 = (unsigned char)75;
unsigned short var_20 = (unsigned short)34692;
unsigned long long int var_21 = 2641987571725410001ULL;
signed char var_22 = (signed char)-19;
unsigned int var_23 = 4200728482U;
long long int var_24 = -4451631843213567073LL;
unsigned long long int var_25 = 5331251729227091337ULL;
int arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = -305023336;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
