#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 36861517U;
long long int var_11 = -6481154047699066543LL;
long long int var_13 = -3193500828937861265LL;
unsigned int var_14 = 2567489068U;
short var_16 = (short)1069;
int zero = 0;
signed char var_18 = (signed char)30;
long long int var_19 = -154024402015629229LL;
unsigned short var_20 = (unsigned short)33249;
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
