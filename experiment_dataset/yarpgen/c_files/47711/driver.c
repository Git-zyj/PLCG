#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25627;
unsigned short var_2 = (unsigned short)45962;
signed char var_3 = (signed char)-116;
unsigned int var_5 = 2248704047U;
int var_11 = 1968941217;
int zero = 0;
unsigned char var_15 = (unsigned char)178;
unsigned char var_16 = (unsigned char)139;
unsigned long long int var_17 = 3421607116233402257ULL;
void init() {
}

void checksum() {
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
