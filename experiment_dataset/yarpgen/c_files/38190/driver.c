#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)80;
unsigned char var_2 = (unsigned char)52;
unsigned long long int var_4 = 15727388428569120370ULL;
short var_6 = (short)-25272;
short var_9 = (short)32037;
unsigned short var_12 = (unsigned short)31484;
int zero = 0;
int var_13 = -1980220405;
short var_14 = (short)7615;
short var_15 = (short)-24323;
int var_16 = -649376607;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
