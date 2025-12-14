#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8814;
unsigned char var_3 = (unsigned char)203;
unsigned long long int var_9 = 3916604076149571293ULL;
int zero = 0;
signed char var_16 = (signed char)-106;
short var_17 = (short)5992;
int var_18 = -1673482021;
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
