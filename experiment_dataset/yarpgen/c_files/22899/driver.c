#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-5604;
unsigned long long int var_8 = 14763816844184823355ULL;
unsigned long long int var_9 = 1402509298675735247ULL;
int zero = 0;
long long int var_11 = 873905056334664394LL;
short var_12 = (short)-31455;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
