#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)62;
unsigned short var_1 = (unsigned short)37878;
unsigned char var_2 = (unsigned char)227;
unsigned long long int var_3 = 13200435066285332487ULL;
int var_4 = -998521619;
int var_6 = 418601443;
unsigned char var_8 = (unsigned char)150;
unsigned long long int var_9 = 11521284666749155764ULL;
unsigned short var_10 = (unsigned short)53054;
unsigned long long int var_12 = 12804382147238480320ULL;
short var_13 = (short)-5477;
unsigned char var_14 = (unsigned char)69;
unsigned long long int var_16 = 9544461349984750903ULL;
long long int var_18 = 4426235517851291610LL;
int zero = 0;
unsigned char var_20 = (unsigned char)33;
_Bool var_21 = (_Bool)1;
long long int var_22 = -6317646980534082586LL;
unsigned short var_23 = (unsigned short)6281;
unsigned int var_24 = 2621719570U;
unsigned char var_25 = (unsigned char)120;
unsigned int arr_0 [13] [13] ;
short arr_1 [13] ;
unsigned int arr_2 [13] ;
unsigned long long int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 757403621U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)12664;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 2678149725U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1414138548596528242ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
