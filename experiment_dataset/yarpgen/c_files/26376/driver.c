#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 6612791876276759350ULL;
long long int var_10 = -5641869422593452482LL;
int zero = 0;
short var_17 = (short)7037;
unsigned char var_18 = (unsigned char)87;
unsigned long long int var_19 = 9440336825066123409ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
