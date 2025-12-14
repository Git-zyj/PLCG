#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)361;
unsigned short var_3 = (unsigned short)33478;
unsigned int var_4 = 2941344099U;
signed char var_5 = (signed char)16;
unsigned short var_7 = (unsigned short)48619;
signed char var_10 = (signed char)64;
signed char var_12 = (signed char)94;
long long int var_15 = 1233217614799450431LL;
long long int var_16 = -8073532795660745615LL;
int zero = 0;
int var_17 = 1698181617;
unsigned char var_18 = (unsigned char)66;
unsigned short var_19 = (unsigned short)25396;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
