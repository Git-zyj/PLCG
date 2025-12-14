#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)85;
unsigned short var_5 = (unsigned short)27671;
int var_7 = -1746315126;
int var_9 = 1249304981;
unsigned int var_13 = 3357308618U;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 1557045697U;
short var_17 = (short)-30372;
_Bool var_18 = (_Bool)1;
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
