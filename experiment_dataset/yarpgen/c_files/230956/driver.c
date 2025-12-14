#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)68;
_Bool var_1 = (_Bool)1;
unsigned char var_5 = (unsigned char)65;
int zero = 0;
short var_13 = (short)3917;
signed char var_14 = (signed char)-61;
signed char var_15 = (signed char)-122;
short var_16 = (short)-4507;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
