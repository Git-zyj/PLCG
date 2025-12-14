#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7754158521882610348LL;
unsigned char var_5 = (unsigned char)173;
long long int var_6 = -8541613677092787635LL;
int var_8 = 408350064;
int zero = 0;
unsigned long long int var_11 = 11398655233727468140ULL;
unsigned int var_12 = 1201215860U;
int var_13 = -634779284;
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
