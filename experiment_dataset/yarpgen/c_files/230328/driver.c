#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4740360180710713723LL;
unsigned char var_2 = (unsigned char)246;
int var_7 = 1706640103;
int var_11 = -575150372;
int zero = 0;
unsigned long long int var_12 = 15625932767534740891ULL;
unsigned short var_13 = (unsigned short)5059;
void init() {
}

void checksum() {
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
