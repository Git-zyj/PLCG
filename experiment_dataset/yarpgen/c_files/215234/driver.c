#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1168782152U;
unsigned int var_4 = 4262560435U;
unsigned char var_6 = (unsigned char)95;
int var_8 = 716528158;
unsigned int var_14 = 3362761208U;
signed char var_15 = (signed char)-16;
int zero = 0;
unsigned long long int var_17 = 7756704743083414253ULL;
unsigned char var_18 = (unsigned char)202;
int var_19 = 1874284855;
unsigned long long int var_20 = 18299144556459041635ULL;
unsigned int var_21 = 2979699017U;
unsigned long long int var_22 = 17828462306579653830ULL;
long long int var_23 = -6308906886792472222LL;
signed char arr_1 [19] ;
_Bool arr_2 [19] ;
unsigned short arr_3 [19] ;
unsigned int arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)26980;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 148886698U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
