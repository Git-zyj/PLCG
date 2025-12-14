#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -641450670;
unsigned long long int var_8 = 10166434325178892201ULL;
unsigned char var_9 = (unsigned char)93;
int zero = 0;
short var_10 = (short)-31608;
short var_11 = (short)12686;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
