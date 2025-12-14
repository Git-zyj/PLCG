#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1412669028;
signed char var_5 = (signed char)55;
unsigned short var_7 = (unsigned short)31703;
short var_8 = (short)15316;
unsigned long long int var_9 = 5061830531196630803ULL;
short var_11 = (short)-16172;
unsigned char var_12 = (unsigned char)83;
unsigned short var_14 = (unsigned short)27998;
int var_18 = -829689520;
int zero = 0;
unsigned int var_19 = 420570680U;
short var_20 = (short)31925;
unsigned short var_21 = (unsigned short)35643;
void init() {
}

void checksum() {
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
