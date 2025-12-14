#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27049;
short var_4 = (short)16307;
long long int var_11 = -6014724042530103553LL;
unsigned int var_12 = 1115760073U;
unsigned short var_14 = (unsigned short)16065;
int zero = 0;
int var_16 = 1788208501;
unsigned short var_17 = (unsigned short)18509;
unsigned short var_18 = (unsigned short)59773;
long long int var_19 = -937848014410828839LL;
short var_20 = (short)185;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
