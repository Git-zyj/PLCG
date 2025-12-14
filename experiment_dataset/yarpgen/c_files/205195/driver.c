#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)184;
unsigned int var_7 = 92388601U;
short var_9 = (short)-10603;
unsigned char var_11 = (unsigned char)144;
int zero = 0;
long long int var_12 = 4150079790420492243LL;
unsigned short var_13 = (unsigned short)11485;
int var_14 = 16249282;
unsigned short var_15 = (unsigned short)64898;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
