#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)170;
short var_8 = (short)-13138;
short var_9 = (short)-11037;
short var_11 = (short)-14266;
int zero = 0;
unsigned char var_15 = (unsigned char)125;
unsigned char var_16 = (unsigned char)171;
void init() {
}

void checksum() {
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
