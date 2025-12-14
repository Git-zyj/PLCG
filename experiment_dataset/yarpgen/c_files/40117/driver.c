#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16529;
unsigned int var_5 = 4246735219U;
unsigned short var_6 = (unsigned short)39989;
signed char var_8 = (signed char)80;
short var_9 = (short)18964;
unsigned char var_10 = (unsigned char)3;
unsigned char var_11 = (unsigned char)123;
unsigned char var_14 = (unsigned char)120;
signed char var_16 = (signed char)-28;
int zero = 0;
long long int var_19 = -190088599183232358LL;
short var_20 = (short)-20832;
unsigned short var_21 = (unsigned short)46591;
short var_22 = (short)18345;
int var_23 = -1567176984;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)15418;
unsigned char var_26 = (unsigned char)230;
unsigned int var_27 = 2183067551U;
unsigned int var_28 = 663897192U;
unsigned short var_29 = (unsigned short)29501;
unsigned short var_30 = (unsigned short)9784;
long long int var_31 = -1526281228150091638LL;
unsigned short var_32 = (unsigned short)31021;
short var_33 = (short)15674;
int arr_0 [18] ;
unsigned short arr_1 [18] ;
unsigned int arr_2 [18] [18] [18] ;
unsigned short arr_5 [18] ;
unsigned char arr_6 [18] [18] [18] [18] [18] ;
unsigned long long int arr_7 [18] [18] ;
unsigned short arr_14 [13] [13] ;
unsigned short arr_20 [13] [13] [13] [13] [13] ;
unsigned long long int arr_21 [13] [13] ;
unsigned int arr_25 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -2113847125;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)6097;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 4171323272U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)28123;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 5182724607456011387ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)11004;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)32142;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 6060955372365142529ULL : 9685330412286619092ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = 1101603383U;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
