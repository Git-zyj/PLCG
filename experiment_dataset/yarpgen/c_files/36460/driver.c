#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2215290409U;
int var_1 = 675589856;
signed char var_9 = (signed char)54;
int zero = 0;
short var_18 = (short)23815;
unsigned short var_19 = (unsigned short)19388;
short var_20 = (short)7252;
long long int var_21 = -7313057294602242276LL;
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
