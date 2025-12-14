#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53877;
long long int var_2 = 8318018840109001455LL;
signed char var_3 = (signed char)47;
short var_4 = (short)6497;
unsigned int var_8 = 303905538U;
unsigned int var_12 = 1911470586U;
int zero = 0;
short var_14 = (short)1575;
unsigned char var_15 = (unsigned char)128;
void init() {
}

void checksum() {
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
