#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1611734467324911442LL;
long long int var_6 = 2642537505792790360LL;
long long int var_11 = -375106286295453000LL;
int zero = 0;
unsigned char var_13 = (unsigned char)200;
short var_14 = (short)-2734;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
