#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1148432993;
unsigned short var_1 = (unsigned short)14648;
unsigned char var_2 = (unsigned char)94;
long long int var_3 = 1608174617492331962LL;
int var_4 = 1267146169;
long long int var_5 = -3022539642399582001LL;
unsigned char var_6 = (unsigned char)234;
unsigned char var_7 = (unsigned char)180;
unsigned char var_8 = (unsigned char)14;
int var_9 = 1627830403;
unsigned int var_10 = 1193842538U;
int var_11 = -876508209;
unsigned short var_12 = (unsigned short)29148;
unsigned short var_13 = (unsigned short)46021;
long long int var_14 = 184287743165654296LL;
signed char var_15 = (signed char)11;
signed char var_16 = (signed char)103;
int zero = 0;
unsigned char var_17 = (unsigned char)57;
signed char var_18 = (signed char)76;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)20057;
int var_22 = 974875615;
_Bool var_23 = (_Bool)1;
long long int var_24 = -4627775357553384513LL;
unsigned int var_25 = 1715974189U;
unsigned short var_26 = (unsigned short)2527;
int var_27 = -987694664;
short var_28 = (short)-6056;
long long int var_29 = -1649202321327907070LL;
unsigned short var_30 = (unsigned short)42329;
long long int var_31 = 678294202971205821LL;
unsigned short var_32 = (unsigned short)4661;
signed char var_33 = (signed char)84;
unsigned int var_34 = 496077518U;
unsigned char var_35 = (unsigned char)160;
unsigned short arr_8 [19] [19] [19] [19] ;
unsigned int arr_15 [19] ;
unsigned short arr_24 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)17578 : (unsigned short)61801;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 434875145U : 3053801444U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)36546 : (unsigned short)1795;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
