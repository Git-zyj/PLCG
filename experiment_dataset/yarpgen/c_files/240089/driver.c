#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3783886729U;
signed char var_5 = (signed char)38;
unsigned int var_6 = 129671840U;
int zero = 0;
unsigned long long int var_14 = 12420792155677449815ULL;
long long int var_15 = -544170370882981915LL;
void init() {
}

void checksum() {
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
