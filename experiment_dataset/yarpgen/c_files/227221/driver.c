#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17518289157028384186ULL;
unsigned char var_1 = (unsigned char)1;
unsigned long long int var_2 = 10322605807605381566ULL;
unsigned long long int var_5 = 17616860487490769440ULL;
long long int var_6 = -3268592862958068673LL;
unsigned int var_8 = 877531300U;
unsigned long long int var_9 = 16561063471071648037ULL;
int zero = 0;
long long int var_10 = 7802129845808485625LL;
long long int var_11 = -8694719775873949947LL;
unsigned long long int var_12 = 251917093116327835ULL;
short var_13 = (short)11197;
long long int var_14 = 5024660557702618514LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
