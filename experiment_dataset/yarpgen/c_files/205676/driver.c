#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)59;
short var_9 = (short)26532;
unsigned int var_11 = 4075371791U;
long long int var_13 = 2538891763540122786LL;
unsigned char var_14 = (unsigned char)184;
int zero = 0;
unsigned long long int var_15 = 6770924001418185019ULL;
unsigned int var_16 = 3572995903U;
short var_17 = (short)-16670;
unsigned short var_18 = (unsigned short)40301;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
