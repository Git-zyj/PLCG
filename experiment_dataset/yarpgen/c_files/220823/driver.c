#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_12 = 1388481438U;
unsigned long long int var_15 = 14533900635778609227ULL;
int zero = 0;
short var_16 = (short)32168;
unsigned long long int var_17 = 17504864051683213561ULL;
unsigned short var_18 = (unsigned short)29726;
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
