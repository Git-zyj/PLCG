#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 245126812;
unsigned int var_5 = 3707324380U;
int var_8 = -507577839;
int zero = 0;
long long int var_13 = 3832705422884192914LL;
unsigned long long int var_14 = 13435041748305440029ULL;
unsigned long long int var_15 = 3385096565595524819ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
