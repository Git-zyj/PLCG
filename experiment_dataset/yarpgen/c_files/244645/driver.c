#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1747346420;
signed char var_2 = (signed char)79;
unsigned int var_3 = 2420297941U;
unsigned char var_4 = (unsigned char)243;
int var_6 = 1137902306;
unsigned short var_7 = (unsigned short)25795;
signed char var_9 = (signed char)74;
int zero = 0;
short var_12 = (short)3837;
long long int var_13 = -6229784734354278346LL;
long long int var_14 = -8548437713523947843LL;
unsigned short var_15 = (unsigned short)57895;
int var_16 = 434208564;
int var_17 = 1185877932;
unsigned char arr_1 [12] ;
unsigned short arr_3 [12] [12] [12] ;
long long int arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)64607;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3587173294028641246LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
