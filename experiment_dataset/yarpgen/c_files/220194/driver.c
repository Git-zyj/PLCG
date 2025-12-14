#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
_Bool var_1 = (_Bool)0;
unsigned char var_6 = (unsigned char)64;
short var_7 = (short)-16873;
unsigned long long int var_14 = 4831192448414544618ULL;
int zero = 0;
long long int var_17 = 9058432357695694522LL;
unsigned char var_18 = (unsigned char)146;
_Bool var_19 = (_Bool)1;
long long int var_20 = -3614757305935050724LL;
unsigned long long int var_21 = 8209056078270495909ULL;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)7985;
unsigned char var_24 = (unsigned char)29;
long long int var_25 = -4145716907768301190LL;
unsigned long long int var_26 = 16286764954566528988ULL;
unsigned char var_27 = (unsigned char)208;
unsigned long long int arr_0 [18] ;
unsigned char arr_1 [18] [18] ;
unsigned short arr_3 [23] [23] ;
short arr_4 [23] [23] ;
unsigned char arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 15759199012185411749ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)29034 : (unsigned short)10388;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-16527;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)197;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
