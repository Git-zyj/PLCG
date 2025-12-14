#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1929490866;
int var_3 = -1685292962;
long long int var_4 = 7952635439721273174LL;
long long int var_6 = 7806782373153292594LL;
int var_7 = -1846675444;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)136;
unsigned long long int var_10 = 17773020391157606266ULL;
unsigned char var_12 = (unsigned char)158;
unsigned long long int var_13 = 13468641437591543770ULL;
signed char var_15 = (signed char)-80;
unsigned char var_16 = (unsigned char)52;
int zero = 0;
long long int var_19 = -8183468357444316263LL;
unsigned char var_20 = (unsigned char)122;
unsigned short var_21 = (unsigned short)13610;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)73;
unsigned char var_25 = (unsigned char)1;
unsigned char var_26 = (unsigned char)74;
_Bool var_27 = (_Bool)0;
unsigned int var_28 = 1709470518U;
_Bool arr_0 [14] ;
unsigned char arr_1 [14] ;
unsigned int arr_2 [14] ;
unsigned int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)2 : (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2844336300U : 4087140111U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3857849430U : 1162755073U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
