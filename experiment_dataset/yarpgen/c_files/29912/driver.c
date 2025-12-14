#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-108;
int var_2 = 1285053390;
int var_3 = 2132355923;
unsigned long long int var_4 = 3424876239941075628ULL;
signed char var_5 = (signed char)65;
short var_6 = (short)-26337;
unsigned short var_7 = (unsigned short)62863;
short var_8 = (short)-821;
unsigned long long int var_9 = 17651435137511703302ULL;
signed char var_10 = (signed char)4;
unsigned char var_12 = (unsigned char)213;
unsigned long long int var_13 = 16258287040120426872ULL;
unsigned long long int var_14 = 2397477953143075381ULL;
int var_15 = -1024761811;
unsigned long long int var_16 = 14949168379050122664ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)143;
int var_18 = -1668774583;
unsigned char var_19 = (unsigned char)75;
signed char var_20 = (signed char)-114;
signed char var_21 = (signed char)103;
short var_22 = (short)-14437;
unsigned int var_23 = 3908497523U;
short var_24 = (short)22131;
unsigned int var_25 = 4226155456U;
short var_26 = (short)-6659;
int arr_0 [13] [13] ;
short arr_1 [13] [13] ;
signed char arr_5 [13] [13] ;
unsigned short arr_6 [13] [13] ;
signed char arr_7 [13] ;
_Bool arr_15 [13] ;
unsigned int arr_18 [13] [13] [13] ;
signed char arr_3 [13] [13] ;
long long int arr_12 [13] [13] [13] [13] ;
unsigned char arr_13 [13] [13] ;
unsigned short arr_20 [13] ;
unsigned short arr_23 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -498491485;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-28614;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)64322;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 1804767642U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 4253459262866127470LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned short)4043 : (unsigned short)7609;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = (unsigned short)10473;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
