#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1418863561;
unsigned long long int var_9 = 10936529526709100596ULL;
unsigned long long int var_11 = 16447628174721096803ULL;
int var_13 = 287980637;
unsigned short var_14 = (unsigned short)62078;
unsigned int var_15 = 104960695U;
int zero = 0;
short var_16 = (short)-18662;
unsigned int var_17 = 3709469275U;
int var_18 = -89501805;
int var_19 = -1024819981;
int arr_0 [19] ;
long long int arr_1 [19] ;
unsigned char arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1786186679;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -6834203080748245976LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)234;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
