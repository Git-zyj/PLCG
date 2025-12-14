#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)22763;
unsigned short var_7 = (unsigned short)27820;
signed char var_13 = (signed char)67;
int zero = 0;
unsigned int var_14 = 2857191868U;
unsigned int var_15 = 241965500U;
unsigned long long int var_16 = 3603130384868022230ULL;
unsigned long long int var_17 = 6495408474016236846ULL;
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
