#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3901308847U;
long long int var_3 = 1564876910848480106LL;
unsigned int var_7 = 4239998728U;
unsigned int var_9 = 4220550077U;
unsigned int var_10 = 3711279035U;
int zero = 0;
short var_14 = (short)20226;
unsigned short var_15 = (unsigned short)14879;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
