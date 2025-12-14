#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = 1970972088159144314LL;
long long int var_5 = 2746705079818013540LL;
unsigned char var_7 = (unsigned char)108;
unsigned long long int var_9 = 6258254610920882751ULL;
long long int var_13 = -1676282658395422398LL;
int zero = 0;
int var_17 = 387996970;
unsigned int var_18 = 1727537114U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
