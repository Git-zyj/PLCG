#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)1953;
short var_6 = (short)-14457;
unsigned int var_12 = 3555879965U;
int zero = 0;
unsigned short var_13 = (unsigned short)37156;
long long int var_14 = 4233767160971848085LL;
signed char var_15 = (signed char)-85;
unsigned long long int var_16 = 12806630316631303990ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
