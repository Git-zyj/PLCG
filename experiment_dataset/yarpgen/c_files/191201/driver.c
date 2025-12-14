#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3001898080716706009ULL;
unsigned long long int var_7 = 3557189947250809018ULL;
unsigned long long int var_8 = 1543045831853019546ULL;
int zero = 0;
unsigned long long int var_12 = 16708682974007458900ULL;
unsigned long long int var_13 = 9033207507526861282ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
