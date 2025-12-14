#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7728;
_Bool var_2 = (_Bool)1;
int var_3 = -739426829;
unsigned long long int var_4 = 2707310882229066138ULL;
unsigned char var_5 = (unsigned char)136;
unsigned short var_8 = (unsigned short)45485;
long long int var_10 = 4994337059948408695LL;
int var_11 = 1218977898;
int zero = 0;
long long int var_12 = 554128026105575667LL;
short var_13 = (short)1395;
signed char var_14 = (signed char)-94;
short var_15 = (short)16195;
long long int var_16 = -1846963454696553967LL;
long long int var_17 = 337408660557142710LL;
int var_18 = -1167831830;
short var_19 = (short)5030;
signed char var_20 = (signed char)28;
unsigned char var_21 = (unsigned char)75;
short var_22 = (short)32763;
long long int var_23 = 8687833780249769785LL;
unsigned char var_24 = (unsigned char)228;
unsigned long long int arr_0 [24] ;
long long int arr_1 [24] ;
short arr_9 [24] [24] [24] ;
short arr_10 [24] [24] [24] ;
signed char arr_13 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 3805357802111549722ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 4269545140380628523LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)29316;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)-30765;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)-36 : (signed char)-114;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
