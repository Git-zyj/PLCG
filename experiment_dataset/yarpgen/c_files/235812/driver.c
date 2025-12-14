#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -417162984910287920LL;
long long int var_6 = -6274734937175425584LL;
long long int var_7 = -3964605467613919113LL;
signed char var_8 = (signed char)125;
int var_9 = 1292493977;
int zero = 0;
unsigned long long int var_13 = 17400058306099253090ULL;
short var_14 = (short)9011;
unsigned char var_15 = (unsigned char)76;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
