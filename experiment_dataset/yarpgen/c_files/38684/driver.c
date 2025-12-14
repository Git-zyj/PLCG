#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1247190208396206323LL;
unsigned short var_10 = (unsigned short)35500;
short var_14 = (short)-8966;
unsigned short var_17 = (unsigned short)28442;
unsigned short var_18 = (unsigned short)22059;
int zero = 0;
int var_19 = -1327347026;
unsigned short var_20 = (unsigned short)14479;
unsigned short var_21 = (unsigned short)44315;
unsigned int var_22 = 247240175U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
