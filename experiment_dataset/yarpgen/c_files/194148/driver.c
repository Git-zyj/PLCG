#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 279421359;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 5580545853650159352ULL;
unsigned int var_9 = 1528697264U;
int zero = 0;
int var_10 = 1936607862;
unsigned int var_11 = 2805619661U;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
