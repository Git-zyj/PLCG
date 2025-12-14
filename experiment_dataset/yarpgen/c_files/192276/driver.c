#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)239;
unsigned long long int var_9 = 5929215618606260061ULL;
unsigned short var_14 = (unsigned short)38338;
short var_15 = (short)-3749;
int zero = 0;
signed char var_20 = (signed char)-98;
signed char var_21 = (signed char)-84;
void init() {
}

void checksum() {
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
