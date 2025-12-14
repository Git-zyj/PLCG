#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)12310;
_Bool var_6 = (_Bool)1;
unsigned long long int var_11 = 18170983377033333930ULL;
int var_12 = -2118624004;
short var_17 = (short)-31156;
int zero = 0;
unsigned short var_19 = (unsigned short)19024;
long long int var_20 = -8665950652940800647LL;
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
