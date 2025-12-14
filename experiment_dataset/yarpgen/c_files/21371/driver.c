#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1794647977501353217LL;
long long int var_11 = -1469459927309911346LL;
short var_13 = (short)798;
short var_17 = (short)5549;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 7212123555330369962LL;
void init() {
}

void checksum() {
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
