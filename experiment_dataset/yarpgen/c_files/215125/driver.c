#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2178;
unsigned char var_6 = (unsigned char)6;
int var_8 = 1488146453;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_17 = 518710159;
long long int var_18 = -5306730775324137237LL;
void init() {
}

void checksum() {
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
