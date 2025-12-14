#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
short var_9 = (short)-20619;
unsigned char var_10 = (unsigned char)205;
unsigned char var_12 = (unsigned char)109;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 6737341992002385827LL;
unsigned char var_18 = (unsigned char)69;
long long int var_19 = -956803725997360701LL;
unsigned char var_20 = (unsigned char)226;
int var_21 = 437108773;
short arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (short)16410;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
