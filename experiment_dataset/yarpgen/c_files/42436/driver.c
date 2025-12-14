#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1626687923;
unsigned long long int var_9 = 16853966987640174244ULL;
unsigned long long int var_10 = 12945944693868562617ULL;
signed char var_14 = (signed char)-114;
int zero = 0;
signed char var_15 = (signed char)16;
long long int var_16 = -1734171240624747868LL;
unsigned int var_17 = 3467279034U;
void init() {
}

void checksum() {
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
