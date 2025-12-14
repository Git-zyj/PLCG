#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6284338738417633135ULL;
signed char var_4 = (signed char)-52;
int var_6 = -1613992234;
unsigned char var_7 = (unsigned char)24;
_Bool var_8 = (_Bool)1;
short var_9 = (short)3449;
int var_12 = 1451287070;
short var_13 = (short)14362;
unsigned long long int var_16 = 1636847121167295799ULL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)63572;
int zero = 0;
signed char var_19 = (signed char)-102;
unsigned long long int var_20 = 10617744278702320195ULL;
signed char var_21 = (signed char)-103;
unsigned long long int var_22 = 13016129708156419816ULL;
unsigned short var_23 = (unsigned short)21894;
unsigned long long int var_24 = 14463623975476895319ULL;
unsigned char var_25 = (unsigned char)156;
unsigned char var_26 = (unsigned char)198;
signed char var_27 = (signed char)59;
int var_28 = -1565769889;
unsigned char var_29 = (unsigned char)8;
_Bool var_30 = (_Bool)1;
long long int var_31 = -3176576929607456930LL;
unsigned int var_32 = 4211529231U;
signed char arr_0 [12] [12] ;
int arr_1 [12] [12] ;
_Bool arr_3 [12] ;
unsigned char arr_4 [12] [12] ;
_Bool arr_9 [12] [12] [12] [12] ;
short arr_11 [12] [12] [12] ;
long long int arr_12 [12] ;
_Bool arr_13 [12] [12] [12] ;
unsigned short arr_18 [12] [12] [12] [12] [12] ;
int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -1644844713;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)5901;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = 5797759541355683931LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)52975;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -1192984941;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
