#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53750;
signed char var_1 = (signed char)102;
short var_2 = (short)6854;
unsigned short var_3 = (unsigned short)37587;
_Bool var_5 = (_Bool)1;
long long int var_6 = 6871177849248010795LL;
signed char var_7 = (signed char)9;
unsigned int var_8 = 4075496058U;
short var_10 = (short)18028;
signed char var_11 = (signed char)110;
unsigned short var_14 = (unsigned short)23536;
unsigned char var_15 = (unsigned char)51;
unsigned long long int var_16 = 15236723055646526710ULL;
long long int var_18 = 6095668430080642790LL;
int zero = 0;
unsigned int var_19 = 1237640055U;
unsigned char var_20 = (unsigned char)111;
unsigned short var_21 = (unsigned short)63203;
unsigned short var_22 = (unsigned short)5788;
signed char var_23 = (signed char)-80;
unsigned char var_24 = (unsigned char)83;
int var_25 = -1515564454;
unsigned short var_26 = (unsigned short)27754;
short var_27 = (short)29380;
unsigned int var_28 = 14088901U;
unsigned short var_29 = (unsigned short)4107;
unsigned int arr_0 [10] ;
short arr_1 [10] ;
unsigned short arr_2 [10] [10] ;
short arr_4 [10] [10] [10] ;
unsigned long long int arr_5 [10] [10] ;
signed char arr_6 [10] [10] ;
_Bool arr_8 [10] [10] [10] [10] ;
unsigned short arr_9 [10] ;
unsigned char arr_10 [10] [10] [10] [10] ;
unsigned int arr_11 [10] [10] [10] [10] ;
unsigned short arr_12 [10] ;
unsigned short arr_18 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1143471049U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-500;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)65527;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)13763;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 2692251306255946373ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (unsigned short)61631;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 1250009037U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (unsigned short)49923;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (unsigned short)7107;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
