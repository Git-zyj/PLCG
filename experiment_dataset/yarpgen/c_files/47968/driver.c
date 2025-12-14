#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1048423127;
unsigned long long int var_12 = 16551828726908913519ULL;
int zero = 0;
short var_14 = (short)-22350;
unsigned long long int var_15 = 10734894577253855906ULL;
signed char var_16 = (signed char)-105;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
