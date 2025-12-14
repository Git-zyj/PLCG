#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55259;
long long int var_6 = -4756844513955022673LL;
signed char var_14 = (signed char)40;
signed char var_16 = (signed char)-108;
unsigned int var_17 = 314392287U;
int zero = 0;
signed char var_19 = (signed char)116;
unsigned long long int var_20 = 12960776401161368499ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
