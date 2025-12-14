#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)26409;
short var_4 = (short)9295;
short var_5 = (short)28195;
long long int var_6 = 8670807930356759929LL;
unsigned short var_7 = (unsigned short)42056;
unsigned int var_11 = 1411718165U;
int zero = 0;
unsigned long long int var_14 = 12374829362338892099ULL;
short var_15 = (short)-23500;
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
