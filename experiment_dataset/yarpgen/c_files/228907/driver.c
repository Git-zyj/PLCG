#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)232;
unsigned short var_3 = (unsigned short)35543;
short var_4 = (short)-23507;
long long int var_5 = 4348522217921136561LL;
unsigned int var_6 = 4188414154U;
unsigned short var_7 = (unsigned short)18582;
unsigned short var_8 = (unsigned short)43184;
unsigned int var_9 = 430632321U;
unsigned int var_11 = 3718866154U;
unsigned long long int var_13 = 4685003936436323200ULL;
int zero = 0;
unsigned long long int var_14 = 17384144450616427807ULL;
long long int var_15 = -380494402306381407LL;
unsigned int var_16 = 3415683326U;
unsigned short var_17 = (unsigned short)50453;
unsigned int var_18 = 310536611U;
unsigned short var_19 = (unsigned short)19711;
unsigned short arr_1 [10] ;
signed char arr_6 [10] [10] [10] ;
int arr_11 [20] ;
unsigned char arr_13 [20] [20] ;
signed char arr_9 [10] ;
long long int arr_14 [20] ;
long long int arr_15 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)47641;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-76 : (signed char)-8;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 1828283281;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)-10 : (signed char)-102;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 2961652054907913655LL : 7251344832148174772LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 687110654472510333LL : 5319178031269096100LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
