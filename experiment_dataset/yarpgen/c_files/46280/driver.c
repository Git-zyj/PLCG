#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31836;
int var_1 = -1319550805;
int var_2 = 545724483;
unsigned char var_3 = (unsigned char)179;
long long int var_4 = 7098256817311822147LL;
unsigned short var_5 = (unsigned short)27303;
long long int var_10 = -8837228373925007173LL;
int zero = 0;
short var_12 = (short)13120;
unsigned long long int var_13 = 1187134582852672523ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
