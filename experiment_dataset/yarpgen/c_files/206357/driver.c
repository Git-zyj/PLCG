#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4534;
int var_1 = 943400454;
unsigned char var_2 = (unsigned char)226;
unsigned short var_3 = (unsigned short)9666;
unsigned int var_4 = 3498145013U;
unsigned long long int var_5 = 8801089863299903858ULL;
int var_6 = -1682921516;
unsigned short var_7 = (unsigned short)35993;
unsigned long long int var_8 = 5775702377373684696ULL;
signed char var_9 = (signed char)95;
unsigned long long int var_10 = 16700701441762478ULL;
int zero = 0;
unsigned long long int var_11 = 15366309785240275531ULL;
long long int var_12 = 4725997375905274830LL;
unsigned short var_13 = (unsigned short)61234;
int var_14 = -1276648714;
unsigned short var_15 = (unsigned short)34573;
unsigned short arr_0 [12] [12] ;
unsigned char arr_2 [12] ;
unsigned char arr_4 [12] ;
int arr_5 [12] [12] ;
int arr_6 [12] ;
long long int arr_7 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)52119;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = -1569893392;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 1599449418;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -4848775245373092093LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
