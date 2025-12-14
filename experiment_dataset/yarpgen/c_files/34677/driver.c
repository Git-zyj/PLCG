#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16948031829942905169ULL;
_Bool var_4 = (_Bool)1;
int var_6 = -1466957269;
unsigned long long int var_9 = 17096290470866946680ULL;
signed char var_10 = (signed char)55;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)-23792;
long long int var_14 = 2576737130037981403LL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-27;
unsigned long long int var_17 = 1907124782318055696ULL;
short var_18 = (short)-8210;
unsigned short var_19 = (unsigned short)19445;
unsigned short var_20 = (unsigned short)45187;
long long int arr_1 [16] ;
long long int arr_2 [16] ;
unsigned long long int arr_5 [17] [17] ;
signed char arr_6 [17] ;
unsigned short arr_8 [17] [17] ;
unsigned char arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -5202703472177583916LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 1860381912928657628LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 6928647409013544909ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)61392;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)116 : (unsigned char)19;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
