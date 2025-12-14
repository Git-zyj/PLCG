#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3267431597603161662ULL;
long long int var_2 = 8314807483896911959LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 4054482719U;
unsigned char var_11 = (unsigned char)0;
long long int var_12 = -4155623534507936396LL;
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
