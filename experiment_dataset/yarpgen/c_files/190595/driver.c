#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 888895894U;
unsigned long long int var_4 = 7105035284904672318ULL;
unsigned long long int var_5 = 9785104609231896589ULL;
unsigned char var_8 = (unsigned char)173;
long long int var_10 = 7403422500769954837LL;
unsigned short var_18 = (unsigned short)32764;
int zero = 0;
unsigned short var_19 = (unsigned short)46066;
long long int var_20 = 7975058782657986598LL;
unsigned short var_21 = (unsigned short)8795;
long long int var_22 = 5358755754368563710LL;
long long int var_23 = -3363103577291132968LL;
unsigned short var_24 = (unsigned short)63429;
unsigned long long int var_25 = 11710575635338805467ULL;
unsigned long long int var_26 = 10247633817015686282ULL;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 2033233237U;
signed char var_29 = (signed char)-12;
signed char var_30 = (signed char)-113;
unsigned char arr_2 [14] [14] [14] ;
long long int arr_5 [14] [14] [14] [14] ;
long long int arr_8 [14] [14] [14] [14] ;
unsigned short arr_16 [25] ;
short arr_17 [25] ;
short arr_14 [14] [14] ;
unsigned short arr_15 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 7127923311360150898LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -5138849916023131347LL : -5869994852955776908LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (unsigned short)55508;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (short)-9586;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (short)24083;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (unsigned short)33842;
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
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
