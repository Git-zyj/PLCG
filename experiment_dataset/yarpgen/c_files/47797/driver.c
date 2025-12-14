#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1734008432U;
unsigned int var_1 = 4059535650U;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 13159496354542625471ULL;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-1;
unsigned short var_7 = (unsigned short)3145;
unsigned short var_8 = (unsigned short)55381;
_Bool var_9 = (_Bool)1;
int var_10 = 1028131008;
signed char var_11 = (signed char)-101;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)139;
unsigned char var_14 = (unsigned char)193;
int zero = 0;
signed char var_15 = (signed char)16;
signed char var_16 = (signed char)-53;
unsigned int var_17 = 3824000995U;
signed char var_18 = (signed char)16;
unsigned int var_19 = 2347949158U;
long long int var_20 = 5382559274104357025LL;
signed char arr_0 [22] [22] ;
unsigned int arr_1 [22] ;
unsigned int arr_5 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 29757935U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 3094379820U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
