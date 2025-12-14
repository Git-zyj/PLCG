#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 970560354U;
unsigned long long int var_8 = 5985756499601254685ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)48907;
unsigned short var_14 = (unsigned short)30716;
unsigned long long int var_15 = 3397456610985989922ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
