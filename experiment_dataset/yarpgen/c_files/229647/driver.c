#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14982;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 6870467774768980158ULL;
unsigned short var_5 = (unsigned short)11583;
int var_7 = 326201183;
int var_8 = 1927545582;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)-78;
int var_13 = 853717577;
long long int var_14 = 8454461284397596908LL;
short var_15 = (short)-15888;
unsigned long long int var_16 = 9535386335033918091ULL;
unsigned int var_17 = 490136641U;
long long int var_18 = -2866191007225062472LL;
unsigned short var_19 = (unsigned short)41717;
int var_20 = 1321874202;
signed char var_21 = (signed char)4;
unsigned long long int arr_0 [16] ;
unsigned int arr_1 [16] [16] ;
short arr_2 [16] ;
unsigned int arr_4 [12] [12] ;
unsigned short arr_7 [12] ;
unsigned long long int arr_8 [12] [12] [12] ;
unsigned short arr_9 [15] [15] ;
signed char arr_11 [15] [15] ;
unsigned short arr_12 [15] [15] ;
signed char arr_13 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1946006858680317407ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 3719607232U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-17237;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 120206515U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned short)60502;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 7141616591677115586ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)18825;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)41708;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-63;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
