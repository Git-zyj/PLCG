#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 292802100U;
unsigned short var_3 = (unsigned short)4732;
unsigned char var_4 = (unsigned char)41;
unsigned long long int var_5 = 13840210678982821045ULL;
unsigned short var_6 = (unsigned short)50029;
unsigned char var_7 = (unsigned char)8;
unsigned char var_8 = (unsigned char)101;
long long int var_9 = 8798575083821055881LL;
signed char var_10 = (signed char)-80;
unsigned short var_12 = (unsigned short)13949;
int zero = 0;
unsigned long long int var_13 = 10098721855979022771ULL;
unsigned char var_14 = (unsigned char)80;
unsigned short var_15 = (unsigned short)19932;
int var_16 = -861116491;
int var_17 = -1253436473;
unsigned char var_18 = (unsigned char)169;
signed char var_19 = (signed char)17;
unsigned char var_20 = (unsigned char)14;
int var_21 = -2049739554;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 18431247773958733346ULL;
unsigned int var_24 = 3438160214U;
unsigned int arr_0 [25] ;
unsigned char arr_1 [25] ;
_Bool arr_3 [25] [25] ;
short arr_4 [25] [25] ;
short arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3063154561U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-30634;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-12359;
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
