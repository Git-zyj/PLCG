#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4522074919689040429LL;
unsigned long long int var_1 = 164720904376864750ULL;
int var_2 = -805394442;
unsigned long long int var_3 = 2611934762523648046ULL;
unsigned int var_4 = 846733271U;
unsigned short var_5 = (unsigned short)64494;
short var_6 = (short)8759;
unsigned char var_7 = (unsigned char)75;
int var_8 = -219878765;
unsigned int var_9 = 2559814550U;
int zero = 0;
unsigned short var_10 = (unsigned short)33471;
int var_11 = 745009317;
signed char var_12 = (signed char)125;
short var_13 = (short)-15267;
signed char var_14 = (signed char)-19;
unsigned int var_15 = 1240932596U;
short arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (short)9152;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
