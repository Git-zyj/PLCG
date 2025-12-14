#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)115;
signed char var_3 = (signed char)93;
int var_4 = -1796104646;
unsigned int var_5 = 2626390309U;
long long int var_6 = 7229273648865545135LL;
unsigned int var_10 = 3862430418U;
long long int var_11 = -1289743043599668846LL;
int zero = 0;
long long int var_15 = -7484661791501696034LL;
unsigned char var_16 = (unsigned char)98;
short var_17 = (short)-15675;
int var_18 = 1441767801;
int var_19 = -618204329;
int var_20 = -1453186317;
int arr_8 [11] [11] [11] [11] ;
signed char arr_11 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -1797625601;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (signed char)-110;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
