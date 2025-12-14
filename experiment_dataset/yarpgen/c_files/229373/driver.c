#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)112;
short var_5 = (short)-28822;
unsigned char var_6 = (unsigned char)0;
signed char var_7 = (signed char)-2;
short var_9 = (short)-9406;
unsigned short var_13 = (unsigned short)11182;
unsigned short var_14 = (unsigned short)18929;
long long int var_15 = -8095609907326458110LL;
unsigned short var_17 = (unsigned short)5628;
unsigned char var_18 = (unsigned char)202;
int zero = 0;
unsigned char var_19 = (unsigned char)16;
unsigned char var_20 = (unsigned char)162;
unsigned char var_21 = (unsigned char)176;
short var_22 = (short)24132;
unsigned char var_23 = (unsigned char)200;
unsigned short var_24 = (unsigned short)46218;
unsigned char var_25 = (unsigned char)48;
unsigned int var_26 = 3047185614U;
unsigned short var_27 = (unsigned short)34190;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)0;
unsigned short var_30 = (unsigned short)32830;
short arr_1 [14] ;
long long int arr_2 [14] ;
short arr_3 [14] [14] ;
unsigned short arr_9 [14] [14] [14] [14] ;
unsigned int arr_10 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)27114;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -2170464390897779135LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (short)31862;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)52198;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 1613826152U;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
