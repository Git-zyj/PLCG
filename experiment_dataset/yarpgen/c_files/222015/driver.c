#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4074741972140379239LL;
int var_15 = -1828091776;
int zero = 0;
unsigned int var_20 = 4146635247U;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)9;
short var_23 = (short)22090;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
