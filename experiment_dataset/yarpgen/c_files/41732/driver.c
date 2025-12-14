#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2021737168;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1626013227U;
unsigned short var_9 = (unsigned short)38000;
_Bool var_11 = (_Bool)1;
unsigned char var_15 = (unsigned char)61;
int zero = 0;
unsigned long long int var_16 = 6102374658689724447ULL;
unsigned int var_17 = 2308876472U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
