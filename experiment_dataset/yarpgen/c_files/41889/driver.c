#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8117939317438716493LL;
short var_2 = (short)18653;
signed char var_3 = (signed char)97;
unsigned long long int var_14 = 4244639804737465531ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)119;
_Bool var_19 = (_Bool)0;
int var_20 = 279417658;
short var_21 = (short)-10019;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
