#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1955421936448602130LL;
unsigned long long int var_8 = 1642924773983975171ULL;
int zero = 0;
unsigned long long int var_10 = 11713179786784584579ULL;
unsigned int var_11 = 3905889703U;
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
