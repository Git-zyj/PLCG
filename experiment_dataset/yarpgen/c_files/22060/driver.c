#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
int var_1 = -218367298;
signed char var_2 = (signed char)32;
signed char var_3 = (signed char)51;
unsigned int var_4 = 2568120400U;
short var_7 = (short)26527;
unsigned char var_8 = (unsigned char)192;
long long int var_9 = 8465196974748230379LL;
unsigned short var_11 = (unsigned short)26759;
unsigned int var_12 = 2298776829U;
int var_16 = 499462630;
int zero = 0;
long long int var_19 = 6427513265771340193LL;
signed char var_20 = (signed char)9;
unsigned int var_21 = 765008781U;
unsigned int var_22 = 1430782801U;
unsigned short var_23 = (unsigned short)61284;
unsigned int arr_0 [12] ;
short arr_1 [12] ;
_Bool arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1974399708U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)-12057;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
