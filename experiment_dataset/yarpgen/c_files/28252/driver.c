#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16975;
unsigned long long int var_2 = 17409561068962101590ULL;
_Bool var_6 = (_Bool)0;
long long int var_13 = 4396899189314524233LL;
long long int var_14 = 8111413599916044348LL;
int var_16 = 1472764093;
int zero = 0;
int var_18 = -1858459141;
unsigned short var_19 = (unsigned short)60755;
unsigned int var_20 = 800069238U;
_Bool var_21 = (_Bool)1;
long long int var_22 = -4695613739694788083LL;
unsigned int var_23 = 2849300645U;
long long int var_24 = -7551579275764603421LL;
signed char var_25 = (signed char)75;
_Bool var_26 = (_Bool)0;
unsigned int arr_0 [24] [24] ;
unsigned char arr_1 [24] ;
long long int arr_2 [24] [24] ;
unsigned long long int arr_3 [24] [24] ;
_Bool arr_4 [24] [24] [24] ;
long long int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 2605956499U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 4606373250712481478LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 13790695390780222938ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 4303279729768071224LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
