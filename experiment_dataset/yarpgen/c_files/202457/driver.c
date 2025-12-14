#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)84;
unsigned char var_2 = (unsigned char)47;
int var_13 = 1261110840;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -3369866024745970096LL;
unsigned short var_16 = (unsigned short)45760;
signed char var_17 = (signed char)-125;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
