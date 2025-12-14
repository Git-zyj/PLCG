#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1167823648;
long long int var_14 = -3771855829977971424LL;
int var_16 = 2013925936;
int zero = 0;
unsigned long long int var_20 = 183459490466220238ULL;
int var_21 = 2123621539;
signed char var_22 = (signed char)51;
short var_23 = (short)15165;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
