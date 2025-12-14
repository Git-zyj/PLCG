#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3031357263655872823LL;
unsigned int var_1 = 3472135077U;
signed char var_5 = (signed char)86;
short var_6 = (short)22372;
short var_10 = (short)3458;
int zero = 0;
long long int var_12 = 3433041091176751750LL;
unsigned short var_13 = (unsigned short)45475;
unsigned char var_14 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
