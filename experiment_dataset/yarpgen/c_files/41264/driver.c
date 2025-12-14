#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 493287477101126656LL;
int var_3 = -466002110;
int var_12 = 790683448;
int var_13 = 1731849696;
int zero = 0;
int var_15 = -563457210;
long long int var_16 = -8256042313574407524LL;
void init() {
}

void checksum() {
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
