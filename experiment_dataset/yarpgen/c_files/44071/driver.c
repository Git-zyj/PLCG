#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)67;
signed char var_15 = (signed char)-43;
int zero = 0;
unsigned long long int var_20 = 15419000257177893748ULL;
unsigned long long int var_21 = 13679378391431515614ULL;
unsigned long long int var_22 = 15560508111991405963ULL;
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
