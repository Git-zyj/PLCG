#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10269780710458159455ULL;
unsigned int var_7 = 2850188862U;
unsigned long long int var_12 = 16230746827354524818ULL;
int zero = 0;
int var_14 = -375354725;
long long int var_15 = -5779976546061351809LL;
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
