#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)111;
unsigned char var_3 = (unsigned char)252;
unsigned char var_4 = (unsigned char)36;
_Bool var_5 = (_Bool)0;
int var_11 = -1839082922;
long long int var_13 = 6859973192045212797LL;
unsigned char var_14 = (unsigned char)115;
unsigned char var_15 = (unsigned char)88;
long long int var_17 = -3792499402854155657LL;
int zero = 0;
unsigned long long int var_18 = 15973360264969383044ULL;
signed char var_19 = (signed char)-17;
_Bool var_20 = (_Bool)1;
int var_21 = -1974981689;
unsigned char var_22 = (unsigned char)201;
long long int var_23 = -4332756714234282811LL;
unsigned long long int var_24 = 14381491971024066276ULL;
long long int var_25 = 8353524761577425180LL;
unsigned char var_26 = (unsigned char)207;
unsigned char var_27 = (unsigned char)150;
signed char var_28 = (signed char)44;
short arr_1 [15] ;
unsigned char arr_11 [12] [12] ;
unsigned short arr_14 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-18761;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (unsigned short)62306;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
