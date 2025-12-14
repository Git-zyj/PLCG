#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22808;
unsigned long long int var_3 = 9495009593133410377ULL;
long long int var_4 = 1495391266073390093LL;
int zero = 0;
int var_12 = 1494624017;
int var_13 = -191103555;
unsigned long long int var_14 = 10771301100702967152ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
