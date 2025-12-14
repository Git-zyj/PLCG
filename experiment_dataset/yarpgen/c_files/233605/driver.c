#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4811195414037942225LL;
short var_3 = (short)5716;
long long int var_4 = 6578188657657558421LL;
long long int var_18 = 6920558533366071697LL;
unsigned short var_19 = (unsigned short)32358;
int zero = 0;
unsigned short var_20 = (unsigned short)23997;
short var_21 = (short)4944;
short var_22 = (short)1147;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
