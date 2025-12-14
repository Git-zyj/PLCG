#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -5405879922053698295LL;
signed char var_6 = (signed char)-51;
short var_8 = (short)-18466;
unsigned int var_10 = 703815295U;
int var_12 = 639867889;
unsigned char var_13 = (unsigned char)153;
int var_17 = -1298079953;
unsigned int var_18 = 1697782780U;
unsigned int var_19 = 1334274727U;
int zero = 0;
unsigned int var_20 = 3249475139U;
signed char var_21 = (signed char)-17;
unsigned long long int var_22 = 5903158583954565050ULL;
unsigned int var_23 = 3978907028U;
unsigned int var_24 = 2697892594U;
unsigned short var_25 = (unsigned short)53033;
unsigned long long int arr_0 [12] ;
short arr_2 [12] [12] [12] ;
signed char arr_3 [12] ;
int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1127431327040015318ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)23585;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)121;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = -434208368;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
