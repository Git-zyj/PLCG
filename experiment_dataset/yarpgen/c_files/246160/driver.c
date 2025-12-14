#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)166;
short var_1 = (short)10812;
unsigned short var_5 = (unsigned short)9144;
unsigned short var_6 = (unsigned short)30713;
unsigned long long int var_7 = 4564670265172929442ULL;
short var_8 = (short)24972;
short var_10 = (short)10048;
unsigned short var_12 = (unsigned short)62879;
short var_13 = (short)22995;
long long int var_14 = 505584147323540876LL;
int zero = 0;
short var_15 = (short)14262;
unsigned long long int var_16 = 3030001410511093515ULL;
long long int var_17 = -3441182355820655782LL;
unsigned short var_18 = (unsigned short)50988;
long long int var_19 = -8829620382518537469LL;
long long int var_20 = 8064573018821640147LL;
int var_21 = -893011788;
signed char arr_0 [25] ;
unsigned short arr_1 [25] ;
signed char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)64221;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)-26;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
