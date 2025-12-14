#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5912;
_Bool var_2 = (_Bool)1;
unsigned int var_6 = 1678625068U;
long long int var_8 = -6223558215447405718LL;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)14;
int zero = 0;
long long int var_14 = 4726705481896917864LL;
long long int var_15 = -4146775169187837970LL;
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
