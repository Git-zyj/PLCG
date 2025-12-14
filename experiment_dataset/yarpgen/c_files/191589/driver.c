#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18988;
long long int var_6 = 6254491528232058130LL;
short var_8 = (short)7472;
short var_11 = (short)1521;
signed char var_13 = (signed char)9;
long long int var_16 = -2822003001975549944LL;
short var_17 = (short)13829;
int zero = 0;
unsigned int var_20 = 3561887119U;
unsigned char var_21 = (unsigned char)127;
short var_22 = (short)20012;
int var_23 = -829087536;
short var_24 = (short)25984;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
