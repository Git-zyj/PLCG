#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4060822253U;
unsigned int var_3 = 3341597220U;
unsigned long long int var_5 = 6948111046620848354ULL;
unsigned long long int var_7 = 13648098642699983273ULL;
signed char var_9 = (signed char)-76;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)218;
unsigned int var_12 = 2705869472U;
unsigned char var_13 = (unsigned char)44;
unsigned int var_14 = 42917187U;
unsigned char var_15 = (unsigned char)197;
unsigned int var_16 = 90632962U;
unsigned int var_17 = 1868029338U;
unsigned int var_18 = 4292091243U;
unsigned int var_19 = 1174388110U;
_Bool var_20 = (_Bool)1;
long long int var_21 = 8223659758284195945LL;
unsigned int arr_0 [10] [10] ;
unsigned long long int arr_4 [12] [12] ;
_Bool arr_9 [16] [16] ;
unsigned char arr_10 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 3707270032U : 3100768843U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 9676986434731824866ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)81;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
