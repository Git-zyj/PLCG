#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)103;
long long int var_15 = -6023425733831903413LL;
unsigned char var_16 = (unsigned char)142;
int zero = 0;
unsigned long long int var_20 = 10781725253458705021ULL;
unsigned int var_21 = 2227878563U;
long long int var_22 = -2635982950280284679LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
