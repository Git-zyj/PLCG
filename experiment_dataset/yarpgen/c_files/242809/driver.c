#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2084729989;
unsigned char var_2 = (unsigned char)147;
short var_5 = (short)30019;
signed char var_6 = (signed char)-116;
int var_7 = 1255958724;
long long int var_9 = 9034719420190853505LL;
signed char var_10 = (signed char)6;
unsigned int var_15 = 155778784U;
int zero = 0;
unsigned short var_16 = (unsigned short)35376;
signed char var_17 = (signed char)29;
unsigned char var_18 = (unsigned char)247;
long long int var_19 = 9082830469135911131LL;
unsigned int var_20 = 241909318U;
void init() {
}

void checksum() {
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
