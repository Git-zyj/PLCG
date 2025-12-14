#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1994141326U;
unsigned int var_2 = 3088327726U;
long long int var_7 = -2184870182780850528LL;
int zero = 0;
long long int var_20 = -4211181858490922170LL;
unsigned long long int var_21 = 2037408391283606561ULL;
int var_22 = 1753346488;
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
