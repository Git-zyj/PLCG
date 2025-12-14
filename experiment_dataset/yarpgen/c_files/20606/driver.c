#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_13 = 7543162115234749264LL;
short var_14 = (short)8100;
unsigned char var_15 = (unsigned char)227;
int zero = 0;
unsigned long long int var_20 = 1130944357733640697ULL;
unsigned int var_21 = 192319172U;
int var_22 = 448866734;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
