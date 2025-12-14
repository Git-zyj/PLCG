#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 533632424746770106ULL;
short var_5 = (short)-15050;
signed char var_14 = (signed char)-6;
unsigned int var_15 = 746037686U;
unsigned int var_16 = 1169049391U;
int zero = 0;
long long int var_17 = 8533530365248048980LL;
short var_18 = (short)-24321;
int var_19 = 1163408597;
short var_20 = (short)-10662;
unsigned short arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)4190;
}

void checksum() {
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
