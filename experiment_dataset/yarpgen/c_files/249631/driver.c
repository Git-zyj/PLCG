#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16979656885988471273ULL;
long long int var_2 = -1453980316330309592LL;
long long int var_3 = 805576927299936332LL;
unsigned int var_4 = 583984100U;
unsigned char var_5 = (unsigned char)35;
signed char var_6 = (signed char)-11;
long long int var_7 = -7348599581375152994LL;
unsigned short var_8 = (unsigned short)62259;
long long int var_12 = 8164887748470916383LL;
int zero = 0;
short var_13 = (short)-2333;
signed char var_14 = (signed char)-20;
short var_15 = (short)-12027;
unsigned char var_16 = (unsigned char)210;
long long int var_17 = 7151942661723433480LL;
unsigned long long int var_18 = 545231263325093203ULL;
signed char var_19 = (signed char)63;
unsigned int var_20 = 1215511514U;
unsigned int arr_6 [12] [12] [12] ;
unsigned int arr_7 [12] [12] ;
long long int arr_9 [12] [12] [12] [12] ;
unsigned int arr_17 [21] ;
unsigned char arr_12 [12] ;
short arr_13 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3373858941U : 388968824U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 1076936864U : 325900058U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -3403392814910407666LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = 3464432720U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)31 : (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (short)3515 : (short)9343;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
