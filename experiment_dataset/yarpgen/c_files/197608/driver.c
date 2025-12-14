#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3970140405258424087LL;
unsigned short var_4 = (unsigned short)12727;
long long int var_7 = -6077952060767769288LL;
_Bool var_12 = (_Bool)1;
int var_18 = -1192327334;
int zero = 0;
short var_19 = (short)29787;
unsigned int var_20 = 1143873247U;
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
