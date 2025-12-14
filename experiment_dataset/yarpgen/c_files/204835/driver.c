#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)208;
short var_7 = (short)22421;
unsigned int var_8 = 4025354241U;
short var_10 = (short)-32619;
unsigned char var_14 = (unsigned char)19;
short var_15 = (short)26996;
int zero = 0;
unsigned char var_16 = (unsigned char)170;
short var_17 = (short)-29167;
short var_18 = (short)-23606;
void init() {
}

void checksum() {
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
