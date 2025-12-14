#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1795508669258819154ULL;
unsigned char var_5 = (unsigned char)221;
long long int var_13 = 510159864154576342LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)42383;
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
