#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-108;
int var_6 = 1412424702;
short var_12 = (short)27106;
int zero = 0;
short var_13 = (short)32368;
unsigned long long int var_14 = 3264466296925477418ULL;
long long int var_15 = -3429650879773603454LL;
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
