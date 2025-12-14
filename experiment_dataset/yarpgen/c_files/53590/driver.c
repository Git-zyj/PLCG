#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54385;
long long int var_10 = 1597344756815998673LL;
short var_13 = (short)10348;
long long int var_14 = 437954787039237786LL;
unsigned short var_16 = (unsigned short)54786;
int zero = 0;
unsigned short var_17 = (unsigned short)57226;
short var_18 = (short)-29782;
void init() {
}

void checksum() {
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
