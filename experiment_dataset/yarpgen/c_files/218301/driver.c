#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1193521546;
unsigned int var_2 = 2089575164U;
int var_3 = 1496210095;
short var_4 = (short)-6448;
short var_7 = (short)-8923;
int var_8 = 2142647366;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 15614305344136539983ULL;
int var_11 = -346873135;
long long int var_12 = 7794470593107589569LL;
int zero = 0;
long long int var_13 = -5914339080973877798LL;
int var_14 = -1207143884;
unsigned char var_15 = (unsigned char)191;
unsigned char var_16 = (unsigned char)140;
int var_17 = -1132158300;
unsigned int arr_1 [10] ;
unsigned short arr_2 [10] [10] [10] ;
short arr_3 [10] [10] ;
unsigned int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 3381702056U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)42590 : (unsigned short)61025;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-10034;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 928589259U : 2952968893U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
