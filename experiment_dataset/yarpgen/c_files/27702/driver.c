#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10281;
int var_2 = 1378237478;
long long int var_3 = -1120367558276287840LL;
int var_13 = 109108135;
int zero = 0;
unsigned short var_14 = (unsigned short)13170;
int var_15 = -1826897960;
short var_16 = (short)-11778;
void init() {
}

void checksum() {
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
