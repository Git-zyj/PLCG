#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)120;
unsigned char var_10 = (unsigned char)147;
int zero = 0;
long long int var_12 = 3754982436062909512LL;
long long int var_13 = -8214588459439314807LL;
unsigned long long int var_14 = 10284618542298043873ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
