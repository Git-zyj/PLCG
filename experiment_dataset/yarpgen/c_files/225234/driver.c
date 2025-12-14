#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24300;
long long int var_1 = 1958461254324300575LL;
unsigned short var_4 = (unsigned short)43297;
short var_6 = (short)-3088;
long long int var_8 = -695658472867905873LL;
short var_9 = (short)18753;
short var_10 = (short)20034;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)836;
long long int var_14 = 1474068330407955275LL;
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
