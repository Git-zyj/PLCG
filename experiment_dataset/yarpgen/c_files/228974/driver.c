#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-15503;
unsigned short var_3 = (unsigned short)31993;
long long int var_8 = -3290014438188426924LL;
unsigned short var_10 = (unsigned short)27004;
short var_11 = (short)-9664;
int zero = 0;
short var_12 = (short)17509;
long long int var_13 = 1914488968584463834LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
