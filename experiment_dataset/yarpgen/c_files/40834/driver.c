#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)65;
unsigned long long int var_3 = 4407491335866866342ULL;
long long int var_7 = 476281549203932763LL;
int zero = 0;
short var_10 = (short)2790;
unsigned long long int var_11 = 17667790665940641735ULL;
unsigned int var_12 = 2745887837U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
