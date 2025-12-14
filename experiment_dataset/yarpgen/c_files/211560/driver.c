#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)31;
short var_6 = (short)19123;
unsigned int var_8 = 2751561456U;
short var_9 = (short)-17322;
int zero = 0;
short var_10 = (short)31661;
short var_11 = (short)-8516;
short var_12 = (short)27517;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
