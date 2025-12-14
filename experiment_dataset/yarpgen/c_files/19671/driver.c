#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8056027273175873220LL;
long long int var_1 = -2622848105942229991LL;
unsigned long long int var_5 = 10933645673512157279ULL;
int zero = 0;
signed char var_13 = (signed char)-92;
unsigned long long int var_14 = 4244955395367320320ULL;
void init() {
}

void checksum() {
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
