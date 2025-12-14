#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10232598970397795342ULL;
unsigned long long int var_3 = 6157358562438390300ULL;
signed char var_6 = (signed char)-47;
unsigned int var_7 = 1024877436U;
long long int var_10 = -7364133157481889339LL;
unsigned int var_14 = 1597672879U;
signed char var_15 = (signed char)-104;
unsigned short var_16 = (unsigned short)10716;
int zero = 0;
signed char var_19 = (signed char)-62;
unsigned int var_20 = 1873214758U;
void init() {
}

void checksum() {
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
