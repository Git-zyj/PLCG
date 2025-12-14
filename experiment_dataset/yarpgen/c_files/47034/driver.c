#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)44129;
signed char var_4 = (signed char)69;
short var_5 = (short)-16173;
signed char var_6 = (signed char)34;
unsigned long long int var_8 = 16506033748257048237ULL;
short var_9 = (short)21048;
short var_11 = (short)28591;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-113;
signed char var_14 = (signed char)-72;
unsigned long long int var_15 = 1001143984331499663ULL;
signed char var_16 = (signed char)-5;
long long int var_17 = -5578695530177196283LL;
unsigned int var_18 = 802143652U;
int var_19 = 2080859636;
signed char var_20 = (signed char)-17;
unsigned short var_21 = (unsigned short)14474;
signed char var_22 = (signed char)23;
int var_23 = 966627147;
short var_24 = (short)21553;
short var_25 = (short)-3231;
unsigned char var_26 = (unsigned char)26;
unsigned long long int var_27 = 17810160997000812076ULL;
signed char var_28 = (signed char)-127;
unsigned short var_29 = (unsigned short)61917;
long long int var_30 = -3229142667988502337LL;
long long int arr_0 [10] ;
unsigned char arr_1 [10] ;
long long int arr_4 [10] ;
long long int arr_5 [10] ;
short arr_7 [10] [10] [10] ;
long long int arr_8 [10] [10] ;
unsigned short arr_15 [10] [10] ;
long long int arr_19 [10] [10] ;
long long int arr_6 [10] [10] ;
unsigned long long int arr_17 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -1688380064921358358LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -5818315809752786388LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -9045225614979970653LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)8523;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = -4308506711715438790LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)61716;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = 6399374962153061650LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = -5806999539617962171LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 1106003330689019994ULL;
}

void checksum() {
    hash(&seed, var_12);
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
