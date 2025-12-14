#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5906958490241313754LL;
unsigned short var_4 = (unsigned short)1157;
long long int var_7 = 4950805241298282602LL;
long long int var_8 = -2873769558497970993LL;
int var_9 = 2037038022;
unsigned char var_11 = (unsigned char)47;
unsigned short var_12 = (unsigned short)25083;
int zero = 0;
long long int var_13 = 1233697803674650194LL;
long long int var_14 = -863527581503922829LL;
long long int var_15 = -6493155322200487978LL;
unsigned long long int var_16 = 2280090043515771644ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
