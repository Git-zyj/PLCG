#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_15 = 3868010031U;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 9962570707505255337ULL;
signed char var_21 = (signed char)42;
unsigned long long int var_22 = 5636010148148587924ULL;
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
