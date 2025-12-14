#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12996;
signed char var_7 = (signed char)-112;
short var_8 = (short)8945;
signed char var_9 = (signed char)-1;
long long int var_10 = 4532575525890008713LL;
int var_11 = 1878959136;
long long int var_13 = 819067814559317370LL;
int zero = 0;
unsigned int var_14 = 236189971U;
short var_15 = (short)4429;
unsigned short var_16 = (unsigned short)34007;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
