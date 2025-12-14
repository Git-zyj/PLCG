#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -2944045081142522400LL;
long long int var_10 = 5914933229109986149LL;
int var_14 = 1652265907;
long long int var_18 = -8363707885920996337LL;
int zero = 0;
signed char var_20 = (signed char)86;
int var_21 = 468415150;
void init() {
}

void checksum() {
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
