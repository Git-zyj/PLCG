#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3446251457844638776LL;
short var_10 = (short)-4500;
short var_11 = (short)12980;
unsigned char var_13 = (unsigned char)81;
int zero = 0;
unsigned char var_16 = (unsigned char)239;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)103;
void init() {
}

void checksum() {
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
