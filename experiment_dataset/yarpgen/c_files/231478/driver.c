#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)123;
long long int var_5 = -1292689796075604083LL;
long long int var_7 = -7534656401953737035LL;
unsigned short var_8 = (unsigned short)349;
int zero = 0;
unsigned int var_10 = 416334310U;
unsigned long long int var_11 = 7209123809123737776ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
