#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1686923766;
unsigned char var_1 = (unsigned char)21;
long long int var_4 = 2353241460037280628LL;
short var_12 = (short)6484;
int zero = 0;
unsigned short var_15 = (unsigned short)17223;
int var_16 = 694863691;
int var_17 = 1446848504;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
