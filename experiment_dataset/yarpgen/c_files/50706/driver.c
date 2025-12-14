#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33979;
unsigned short var_5 = (unsigned short)12618;
unsigned long long int var_6 = 16315134769052779594ULL;
unsigned short var_9 = (unsigned short)41149;
unsigned int var_10 = 3843701881U;
unsigned char var_11 = (unsigned char)0;
unsigned int var_12 = 794722849U;
unsigned long long int var_13 = 2784046421748483717ULL;
unsigned long long int var_14 = 15601485417055937447ULL;
int var_16 = 771527383;
int zero = 0;
unsigned int var_18 = 114225671U;
unsigned long long int var_19 = 10596984513275294696ULL;
unsigned int var_20 = 3922659773U;
unsigned short var_21 = (unsigned short)34667;
unsigned long long int var_22 = 14886512485609096194ULL;
unsigned short var_23 = (unsigned short)45535;
unsigned long long int var_24 = 12256755803945477921ULL;
unsigned int var_25 = 2656825253U;
unsigned long long int var_26 = 14710141554549063493ULL;
unsigned long long int arr_1 [19] ;
unsigned long long int arr_6 [16] ;
signed char arr_8 [20] ;
unsigned long long int arr_9 [20] ;
unsigned long long int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 6242580197141022521ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 6610157800169619307ULL : 5750729028583480708ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = 17588783319245211137ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1249049508364278453ULL : 1220107224382491136ULL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
