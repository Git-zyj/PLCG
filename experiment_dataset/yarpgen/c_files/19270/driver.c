#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_15 = 1531086501;
int var_16 = 1676313104;
int zero = 0;
unsigned char var_17 = (unsigned char)21;
unsigned long long int var_18 = 1778329510438390933ULL;
long long int var_19 = 9102078864441527604LL;
signed char var_20 = (signed char)-77;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
