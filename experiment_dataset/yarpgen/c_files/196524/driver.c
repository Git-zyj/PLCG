#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5987869360212943249LL;
long long int var_4 = -8908542615674214512LL;
long long int var_5 = 9120835920534143099LL;
short var_7 = (short)-13953;
int zero = 0;
long long int var_13 = -4556208278028538976LL;
int var_14 = 1725227374;
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
