#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4458518751912982302LL;
unsigned long long int var_2 = 14979462315336001591ULL;
int var_8 = 856401341;
unsigned int var_9 = 1391381754U;
int zero = 0;
unsigned short var_13 = (unsigned short)43550;
short var_14 = (short)24784;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)7;
void init() {
}

void checksum() {
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
