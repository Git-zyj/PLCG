#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)94;
unsigned short var_2 = (unsigned short)17950;
short var_4 = (short)-30128;
long long int var_5 = 9029741411811619097LL;
unsigned int var_8 = 438866213U;
short var_10 = (short)16714;
unsigned short var_11 = (unsigned short)15430;
short var_13 = (short)25543;
int zero = 0;
unsigned short var_15 = (unsigned short)41307;
short var_16 = (short)-18504;
long long int var_17 = -4085290816312658916LL;
short var_18 = (short)2182;
short arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (short)5201;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
