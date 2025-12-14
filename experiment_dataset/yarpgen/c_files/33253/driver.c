#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 1942541095;
unsigned int var_10 = 486753866U;
int zero = 0;
unsigned long long int var_14 = 14385120184642537054ULL;
short var_15 = (short)-16777;
signed char var_16 = (signed char)-10;
short var_17 = (short)-21159;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
