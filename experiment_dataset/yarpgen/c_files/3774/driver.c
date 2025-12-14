#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1477027128U;
unsigned int var_2 = 1752228005U;
int zero = 0;
int var_11 = 1630419777;
unsigned char var_12 = (unsigned char)150;
unsigned long long int var_13 = 2604580158611861385ULL;
unsigned long long int var_14 = 2750417266331290747ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
