#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3044644866827478272LL;
_Bool var_10 = (_Bool)1;
long long int var_11 = 5202368926681405767LL;
int zero = 0;
short var_14 = (short)-2403;
long long int var_15 = -1617367060782829971LL;
unsigned long long int var_16 = 15235132157243718870ULL;
void init() {
}

void checksum() {
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
