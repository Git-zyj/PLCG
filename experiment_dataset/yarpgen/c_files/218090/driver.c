#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2053;
long long int var_1 = 7522510403231802910LL;
unsigned int var_2 = 211941509U;
unsigned char var_3 = (unsigned char)188;
unsigned int var_5 = 1280786050U;
unsigned char var_6 = (unsigned char)223;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)1;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 4907201535775917854ULL;
int zero = 0;
long long int var_13 = 482890464132996524LL;
int var_14 = 2012240360;
unsigned long long int var_15 = 17025635730752969297ULL;
unsigned long long int var_16 = 355732580090089277ULL;
unsigned short var_17 = (unsigned short)57977;
unsigned long long int var_18 = 5789267057731090289ULL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)52;
unsigned char var_21 = (unsigned char)217;
_Bool var_22 = (_Bool)1;
unsigned short arr_3 [25] ;
long long int arr_5 [25] [25] [25] ;
unsigned char arr_12 [25] [25] [25] [25] [25] [25] ;
unsigned short arr_13 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)53255;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 7355414539227638079LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned char)162 : (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56207 : (unsigned short)37569;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
