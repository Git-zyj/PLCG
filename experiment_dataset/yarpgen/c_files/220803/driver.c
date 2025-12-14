#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1540594364;
int var_4 = 1562725132;
long long int var_13 = -5846561687129850829LL;
short var_14 = (short)-3750;
short var_16 = (short)-8480;
int zero = 0;
unsigned long long int var_17 = 5161406341585331614ULL;
short var_18 = (short)-23261;
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
