#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21358;
unsigned char var_3 = (unsigned char)186;
short var_8 = (short)-14370;
long long int var_12 = -6321088846688048916LL;
long long int var_14 = -1873536316019501035LL;
int zero = 0;
unsigned int var_15 = 2157834607U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
