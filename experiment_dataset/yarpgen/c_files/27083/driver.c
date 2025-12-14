#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7589047888402977449LL;
short var_3 = (short)26512;
int var_8 = -1430754809;
unsigned long long int var_10 = 3353846717952613715ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)1965;
unsigned short var_14 = (unsigned short)17184;
void init() {
}

void checksum() {
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
