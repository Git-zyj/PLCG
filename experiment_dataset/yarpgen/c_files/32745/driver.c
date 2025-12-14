#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -828147825;
unsigned int var_2 = 30118631U;
short var_3 = (short)1818;
long long int var_4 = 219664880152373610LL;
int var_6 = -1069605479;
short var_7 = (short)-15099;
unsigned int var_8 = 1650140580U;
unsigned int var_9 = 3374086309U;
int zero = 0;
short var_10 = (short)-22083;
int var_11 = -174342780;
unsigned short var_12 = (unsigned short)58210;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
