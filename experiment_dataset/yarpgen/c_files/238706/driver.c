#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-56;
int var_3 = 1479188177;
short var_5 = (short)-30183;
short var_6 = (short)-15389;
int var_9 = 1705303880;
int var_10 = 1545867321;
int zero = 0;
unsigned int var_16 = 2210800502U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
