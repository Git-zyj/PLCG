#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4606694900280582239LL;
unsigned char var_12 = (unsigned char)56;
unsigned long long int var_16 = 18353745423315009355ULL;
int zero = 0;
int var_18 = -664275726;
int var_19 = 1563468954;
unsigned int var_20 = 940343210U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
