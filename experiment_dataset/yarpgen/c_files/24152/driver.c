#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4613450784524938586LL;
unsigned short var_1 = (unsigned short)31860;
unsigned long long int var_2 = 13138366148640188642ULL;
unsigned int var_5 = 17366267U;
unsigned int var_6 = 1629048796U;
unsigned char var_7 = (unsigned char)92;
signed char var_10 = (signed char)3;
int var_11 = 1015136991;
unsigned short var_13 = (unsigned short)57421;
unsigned char var_14 = (unsigned char)244;
unsigned int var_15 = 3714930251U;
unsigned long long int var_16 = 7805514852908938429ULL;
unsigned short var_17 = (unsigned short)37372;
int zero = 0;
int var_19 = 375921367;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-3;
unsigned long long int var_22 = 9595393749896361382ULL;
int var_23 = 1876150208;
short var_24 = (short)2214;
unsigned char var_25 = (unsigned char)71;
short var_26 = (short)27212;
short var_27 = (short)-21390;
int var_28 = -1427394884;
unsigned short var_29 = (unsigned short)33272;
unsigned short var_30 = (unsigned short)52906;
int var_31 = 1072252820;
unsigned long long int arr_4 [10] [10] ;
int arr_5 [10] [10] ;
unsigned long long int arr_12 [10] [10] ;
short arr_13 [10] [10] [10] ;
unsigned int arr_16 [15] ;
_Bool arr_17 [15] [15] ;
int arr_18 [15] ;
long long int arr_19 [15] [15] ;
signed char arr_20 [15] [15] ;
unsigned short arr_9 [10] [10] [10] ;
unsigned short arr_23 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 1327372111220652260ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 1855855893;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = 9703025442887357994ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-20701;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = 2033622016U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = -1800290467;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_19 [i_0] [i_1] = 6759017042870756532LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_20 [i_0] [i_1] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)39447;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = (unsigned short)62877;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
