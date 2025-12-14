#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32727;
signed char var_8 = (signed char)51;
int var_12 = 1513037313;
int var_13 = -1876687048;
int zero = 0;
unsigned int var_14 = 3561034832U;
int var_15 = 1714317608;
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
