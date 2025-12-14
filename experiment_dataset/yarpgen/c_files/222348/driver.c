#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1831527827;
unsigned short var_4 = (unsigned short)37976;
_Bool var_5 = (_Bool)0;
unsigned long long int var_10 = 5449614437134549545ULL;
int zero = 0;
long long int var_11 = -975949635645891823LL;
unsigned char var_12 = (unsigned char)84;
int var_13 = 1567587120;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
