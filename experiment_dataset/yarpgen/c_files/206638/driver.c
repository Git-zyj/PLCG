#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4416405246664503480ULL;
long long int var_2 = 2426805879911261594LL;
int var_3 = 74757112;
unsigned long long int var_4 = 16118891875617740962ULL;
signed char var_6 = (signed char)47;
_Bool var_8 = (_Bool)0;
short var_10 = (short)32126;
signed char var_11 = (signed char)-116;
int zero = 0;
unsigned long long int var_12 = 13654030412131697541ULL;
unsigned long long int var_13 = 5204077090398902750ULL;
int var_14 = 1030099484;
int var_15 = -1363955298;
unsigned long long int var_16 = 9306964571168627238ULL;
signed char var_17 = (signed char)40;
signed char var_18 = (signed char)124;
unsigned char var_19 = (unsigned char)184;
unsigned short var_20 = (unsigned short)42879;
unsigned long long int arr_0 [13] ;
unsigned short arr_1 [13] [13] ;
short arr_2 [13] ;
signed char arr_3 [24] ;
signed char arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 12303323431538092636ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)32929;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)-27362;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (signed char)-103;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
