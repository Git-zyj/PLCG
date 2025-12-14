#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1117180495;
int var_3 = -821026825;
unsigned short var_4 = (unsigned short)31994;
signed char var_7 = (signed char)103;
int zero = 0;
unsigned long long int var_16 = 12549258235586456068ULL;
unsigned char var_17 = (unsigned char)207;
void init() {
}

void checksum() {
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
