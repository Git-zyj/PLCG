#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 940876846U;
int var_11 = -1823537899;
int zero = 0;
unsigned long long int var_13 = 1670874709624434723ULL;
long long int var_14 = 5419786925679369754LL;
long long int var_15 = -2110190740602658602LL;
unsigned int var_16 = 697309128U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
