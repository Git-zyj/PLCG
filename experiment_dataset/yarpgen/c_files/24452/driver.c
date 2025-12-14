#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -1477744077;
short var_10 = (short)16282;
long long int var_13 = 8733034461265016696LL;
int var_14 = -800376885;
signed char var_16 = (signed char)18;
int zero = 0;
int var_17 = -1532530518;
short var_18 = (short)-13758;
unsigned long long int var_19 = 11927866229375912835ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
