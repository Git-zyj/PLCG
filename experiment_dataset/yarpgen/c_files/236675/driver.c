#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)18258;
unsigned long long int var_11 = 7169371040509846118ULL;
int zero = 0;
long long int var_18 = -6020562364910987465LL;
short var_19 = (short)3252;
unsigned long long int var_20 = 16585090303273374452ULL;
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
