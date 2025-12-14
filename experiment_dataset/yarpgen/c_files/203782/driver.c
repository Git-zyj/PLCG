#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4358871853603128671LL;
long long int var_4 = -5999265717062291738LL;
long long int var_7 = -6169182671871722079LL;
long long int var_11 = -6754917168891674469LL;
long long int var_12 = -3327014234685428161LL;
int zero = 0;
long long int var_14 = 2597405390784470679LL;
long long int var_15 = 5002036165906938546LL;
long long int var_16 = -4875123281899712418LL;
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
