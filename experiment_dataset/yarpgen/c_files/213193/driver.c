#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-42;
unsigned int var_6 = 4106891013U;
unsigned int var_10 = 4171851144U;
int zero = 0;
unsigned long long int var_11 = 8221286477948374686ULL;
long long int var_12 = 6427606119915279116LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
