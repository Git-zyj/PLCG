#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32116;
unsigned short var_5 = (unsigned short)19235;
unsigned short var_6 = (unsigned short)11883;
short var_11 = (short)-5952;
short var_12 = (short)-3034;
long long int var_17 = 5109491700883071320LL;
int zero = 0;
unsigned char var_18 = (unsigned char)29;
long long int var_19 = -5767736201783758118LL;
signed char var_20 = (signed char)69;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
