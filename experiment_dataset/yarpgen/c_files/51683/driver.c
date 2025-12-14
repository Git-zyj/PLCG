#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)58;
long long int var_1 = -1041737713480245621LL;
unsigned short var_4 = (unsigned short)35428;
signed char var_15 = (signed char)16;
int zero = 0;
signed char var_20 = (signed char)47;
int var_21 = 563321300;
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
