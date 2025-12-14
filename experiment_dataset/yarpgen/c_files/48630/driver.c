#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 506144156U;
long long int var_3 = -856557341584295044LL;
unsigned char var_5 = (unsigned char)151;
int zero = 0;
long long int var_18 = -4718245021081626473LL;
long long int var_19 = -6211412825315049343LL;
unsigned int var_20 = 3246862810U;
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
