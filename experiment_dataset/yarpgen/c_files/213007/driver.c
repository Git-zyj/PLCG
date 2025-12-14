#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 218959783;
long long int var_1 = 3753736711243698862LL;
short var_2 = (short)2266;
unsigned char var_5 = (unsigned char)186;
short var_7 = (short)-29514;
unsigned char var_8 = (unsigned char)77;
signed char var_9 = (signed char)73;
unsigned long long int var_10 = 3247459364837500208ULL;
unsigned char var_11 = (unsigned char)122;
short var_12 = (short)-1929;
signed char var_15 = (signed char)7;
short var_17 = (short)-6832;
int zero = 0;
unsigned int var_18 = 2856971382U;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)54062;
long long int var_21 = -3992131503198418649LL;
unsigned short var_22 = (unsigned short)51759;
unsigned long long int var_23 = 1435570251776461006ULL;
int var_24 = 1535733138;
unsigned char var_25 = (unsigned char)183;
unsigned char var_26 = (unsigned char)136;
unsigned int var_27 = 2210555598U;
short var_28 = (short)-19822;
_Bool var_29 = (_Bool)0;
unsigned char var_30 = (unsigned char)100;
unsigned long long int var_31 = 4025109498689067138ULL;
_Bool var_32 = (_Bool)1;
signed char var_33 = (signed char)-127;
unsigned int var_34 = 3672954502U;
_Bool var_35 = (_Bool)1;
unsigned int arr_0 [16] ;
_Bool arr_2 [16] [16] [16] ;
signed char arr_3 [16] [16] [16] ;
short arr_5 [16] [16] [16] ;
long long int arr_10 [16] [16] [16] [16] [16] ;
unsigned long long int arr_15 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 2978840649U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-8515;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 6716270862113784089LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 4651478518597420580ULL;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
