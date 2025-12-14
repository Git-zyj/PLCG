#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5510311258262545270ULL;
int var_12 = 1422688091;
unsigned long long int var_15 = 6001951284892304962ULL;
int zero = 0;
unsigned long long int var_18 = 16211191708696396749ULL;
signed char var_19 = (signed char)35;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
