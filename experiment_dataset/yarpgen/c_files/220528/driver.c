#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 544598002;
unsigned long long int var_9 = 1123174737515261885ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_16 = 1867480555;
long long int var_17 = -5399846541832226953LL;
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
