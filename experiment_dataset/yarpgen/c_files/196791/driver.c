#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6832753510345923891ULL;
unsigned short var_6 = (unsigned short)65527;
unsigned int var_8 = 683941542U;
unsigned char var_14 = (unsigned char)150;
unsigned char var_15 = (unsigned char)118;
int zero = 0;
short var_17 = (short)-28879;
int var_18 = 1921225346;
signed char var_19 = (signed char)-108;
signed char var_20 = (signed char)90;
long long int var_21 = -3348833641406197532LL;
signed char var_22 = (signed char)90;
unsigned short var_23 = (unsigned short)37517;
unsigned long long int var_24 = 11208812259934776712ULL;
short var_25 = (short)20365;
signed char arr_1 [11] ;
short arr_5 [12] ;
unsigned int arr_3 [11] ;
long long int arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)23840;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 4144968926U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = -3651450652117408374LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
