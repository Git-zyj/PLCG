#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2694673820U;
signed char var_4 = (signed char)114;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 17184451779652456593ULL;
long long int var_10 = 8176592585380012159LL;
int zero = 0;
unsigned long long int var_13 = 8119273625881638523ULL;
unsigned short var_14 = (unsigned short)2489;
short var_15 = (short)-12720;
unsigned long long int var_16 = 10460851554868608894ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
