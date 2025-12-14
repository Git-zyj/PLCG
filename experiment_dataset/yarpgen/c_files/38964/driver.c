#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6267850049968906655LL;
short var_6 = (short)15546;
long long int var_13 = -2064440755811633950LL;
long long int var_19 = 7579505737395790433LL;
int zero = 0;
int var_20 = 854819234;
short var_21 = (short)3297;
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
