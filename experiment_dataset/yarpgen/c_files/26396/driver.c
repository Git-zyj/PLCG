#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)38465;
unsigned short var_4 = (unsigned short)20284;
int zero = 0;
unsigned long long int var_14 = 5388917681374515770ULL;
unsigned int var_15 = 3703984299U;
signed char var_16 = (signed char)39;
unsigned char var_17 = (unsigned char)114;
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
