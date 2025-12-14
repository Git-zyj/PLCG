#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22288;
long long int var_4 = 8013502994959914391LL;
unsigned short var_5 = (unsigned short)48218;
unsigned short var_7 = (unsigned short)25303;
short var_10 = (short)-3218;
unsigned long long int var_11 = 11247265331777443579ULL;
signed char var_13 = (signed char)16;
signed char var_15 = (signed char)-31;
int zero = 0;
unsigned long long int var_17 = 1766982389251440546ULL;
unsigned int var_18 = 1847084938U;
signed char var_19 = (signed char)29;
unsigned long long int var_20 = 873812482306485713ULL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 16941417104887533520ULL;
signed char var_23 = (signed char)9;
unsigned short arr_0 [15] ;
unsigned long long int arr_2 [15] [15] ;
int arr_3 [15] ;
unsigned long long int arr_4 [15] ;
short arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)61214;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 11034843752840653121ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 1794128310;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 14992739492294552175ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-2530 : (short)-27199;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
