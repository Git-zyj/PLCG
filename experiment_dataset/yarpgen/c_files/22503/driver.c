#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6289773598056047504LL;
short var_4 = (short)-21295;
int var_8 = 824282528;
int var_12 = -1545532723;
int zero = 0;
int var_14 = -761238389;
short var_15 = (short)-21535;
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
