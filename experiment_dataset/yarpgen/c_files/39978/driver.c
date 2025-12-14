#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 811032706811302880LL;
unsigned char var_2 = (unsigned char)114;
int var_13 = -1922790324;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_18 = 1466880995;
unsigned int var_19 = 1957050401U;
short var_20 = (short)-28429;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
