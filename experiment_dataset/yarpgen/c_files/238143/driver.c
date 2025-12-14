#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20731;
signed char var_4 = (signed char)-85;
unsigned int var_5 = 2429575009U;
signed char var_6 = (signed char)-15;
unsigned char var_7 = (unsigned char)180;
unsigned char var_8 = (unsigned char)214;
signed char var_10 = (signed char)109;
unsigned char var_11 = (unsigned char)162;
unsigned long long int var_12 = 14816459835227222234ULL;
long long int var_13 = 7992819717136570802LL;
unsigned long long int var_14 = 2965668160804398379ULL;
long long int var_15 = 6973831774281626169LL;
int zero = 0;
signed char var_16 = (signed char)74;
unsigned int var_17 = 327128682U;
unsigned char var_18 = (unsigned char)207;
signed char var_19 = (signed char)-125;
int arr_0 [21] [21] ;
unsigned int arr_2 [21] ;
signed char arr_3 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -72157727;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2845302321U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)101;
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
