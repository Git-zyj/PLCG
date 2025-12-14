#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-28;
int var_13 = 1674194887;
int zero = 0;
long long int var_14 = 4666385109535337823LL;
unsigned long long int var_15 = 5277210857453823481ULL;
int var_16 = 1293777987;
unsigned long long int var_17 = 1125455573243819276ULL;
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
