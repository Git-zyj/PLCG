#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)36;
signed char var_8 = (signed char)74;
unsigned char var_11 = (unsigned char)200;
long long int var_14 = -587006848470121668LL;
int zero = 0;
signed char var_20 = (signed char)48;
long long int var_21 = 6486619151123624484LL;
void init() {
}

void checksum() {
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
