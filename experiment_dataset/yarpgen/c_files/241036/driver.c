#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3386460679U;
unsigned int var_4 = 1101243966U;
long long int var_7 = -6979557539192858986LL;
int zero = 0;
long long int var_12 = 202753115169916674LL;
short var_13 = (short)-4461;
unsigned int var_14 = 821481761U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
