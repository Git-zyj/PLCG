#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_3 = (short)19016;
short var_5 = (short)-31276;
unsigned char var_6 = (unsigned char)55;
long long int var_8 = -8938275669798045454LL;
long long int var_11 = 5104981663241564932LL;
int zero = 0;
int var_12 = -1413754056;
unsigned char var_13 = (unsigned char)181;
long long int var_14 = 5718193454177592063LL;
unsigned char var_15 = (unsigned char)144;
unsigned short var_16 = (unsigned short)5739;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
