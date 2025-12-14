#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11377568209755118820ULL;
unsigned char var_15 = (unsigned char)206;
int zero = 0;
signed char var_20 = (signed char)45;
long long int var_21 = 8752859071590791365LL;
unsigned long long int var_22 = 4557657720573498594ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
