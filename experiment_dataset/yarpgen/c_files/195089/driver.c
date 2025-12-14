#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)30469;
int var_8 = -332397677;
long long int var_9 = -6241231310135972788LL;
long long int var_10 = -6334243944537874064LL;
unsigned long long int var_11 = 12421044789057521823ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)61;
long long int var_14 = -3498105040308030842LL;
short var_15 = (short)-5152;
signed char var_16 = (signed char)8;
unsigned long long int var_17 = 7252080568722699447ULL;
unsigned short var_18 = (unsigned short)52978;
unsigned char var_19 = (unsigned char)62;
int var_20 = 2146039533;
short var_21 = (short)-16897;
int var_22 = 2084401705;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)151;
int var_25 = -932105359;
long long int arr_1 [12] ;
unsigned short arr_2 [12] ;
_Bool arr_5 [12] ;
_Bool arr_8 [12] [12] ;
int arr_9 [12] [12] ;
int arr_12 [12] [12] [12] [12] [12] ;
int arr_21 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -7073302520963844397LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)45189;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 187817163 : 1254740293;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = -444733999;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = -486078967;
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
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
