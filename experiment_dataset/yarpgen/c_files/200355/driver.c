#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 8107904238056504168ULL;
unsigned long long int var_13 = 2030736000111952376ULL;
long long int var_14 = 7539331767479063561LL;
int zero = 0;
unsigned long long int var_19 = 2311682225607798367ULL;
unsigned long long int var_20 = 10400918408190568250ULL;
short var_21 = (short)24294;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
