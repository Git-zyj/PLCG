#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)87;
unsigned long long int var_4 = 5120851802325188064ULL;
int var_5 = -633214760;
unsigned long long int var_6 = 6585239088992513628ULL;
unsigned long long int var_7 = 10093442093099801748ULL;
int var_9 = -1226065330;
unsigned long long int var_11 = 13584625947726827929ULL;
unsigned long long int var_12 = 11093318179324464228ULL;
int zero = 0;
int var_15 = 1198553355;
unsigned int var_16 = 179895134U;
unsigned short var_17 = (unsigned short)39627;
unsigned long long int var_18 = 17414120524315797904ULL;
unsigned int var_19 = 1068523567U;
unsigned long long int var_20 = 5237113249354489110ULL;
unsigned char arr_3 [21] [21] ;
unsigned char arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)153;
}

void checksum() {
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
