#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 519543201782966789LL;
unsigned int var_1 = 2107815319U;
unsigned short var_2 = (unsigned short)21873;
unsigned short var_3 = (unsigned short)22939;
unsigned short var_4 = (unsigned short)35831;
long long int var_5 = -6227613844731866659LL;
unsigned int var_6 = 3716577989U;
unsigned short var_7 = (unsigned short)48417;
unsigned int var_8 = 3542248745U;
unsigned short var_10 = (unsigned short)61750;
int zero = 0;
unsigned short var_17 = (unsigned short)44264;
unsigned int var_18 = 2422978920U;
unsigned short var_19 = (unsigned short)20379;
unsigned short var_20 = (unsigned short)21011;
long long int var_21 = 7371879221223066032LL;
unsigned short var_22 = (unsigned short)37362;
unsigned int arr_0 [20] ;
unsigned int arr_9 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 964293716U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 3876940027U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
