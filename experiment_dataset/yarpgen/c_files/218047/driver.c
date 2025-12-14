#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 139088387354527875LL;
unsigned int var_2 = 3875043621U;
unsigned char var_4 = (unsigned char)186;
_Bool var_6 = (_Bool)1;
unsigned int var_11 = 201663261U;
int zero = 0;
unsigned int var_13 = 612781812U;
long long int var_14 = -7456392948504824120LL;
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
