#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7043019526470249700LL;
short var_2 = (short)-18573;
_Bool var_8 = (_Bool)1;
int var_9 = -358235165;
unsigned char var_11 = (unsigned char)139;
unsigned long long int var_12 = 1551585817951968924ULL;
int zero = 0;
long long int var_15 = 1634384193766005490LL;
int var_16 = -1509177808;
unsigned char var_17 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
