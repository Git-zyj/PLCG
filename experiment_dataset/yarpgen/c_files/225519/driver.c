#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)74;
long long int var_13 = 757992226110203749LL;
long long int var_16 = 5114586799229180356LL;
int zero = 0;
long long int var_18 = 9021763521924373644LL;
short var_19 = (short)24813;
short var_20 = (short)-4762;
unsigned char var_21 = (unsigned char)99;
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
