#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54277;
short var_7 = (short)-31383;
long long int var_12 = 1494975729126469918LL;
int zero = 0;
unsigned long long int var_16 = 6848457809541845146ULL;
unsigned short var_17 = (unsigned short)10560;
unsigned long long int var_18 = 9871035363391299748ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
