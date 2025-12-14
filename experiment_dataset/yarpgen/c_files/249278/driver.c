#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)51;
unsigned int var_4 = 2528915889U;
short var_6 = (short)-12365;
long long int var_7 = -4880963201552830832LL;
unsigned char var_8 = (unsigned char)185;
unsigned long long int var_9 = 18132095766613009456ULL;
int zero = 0;
unsigned long long int var_11 = 9281950258977914933ULL;
signed char var_12 = (signed char)-69;
unsigned long long int var_13 = 752451209803691598ULL;
signed char var_14 = (signed char)-18;
short var_15 = (short)-24490;
short var_16 = (short)-15795;
unsigned int arr_0 [13] ;
int arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2431042599U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 767437743;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
