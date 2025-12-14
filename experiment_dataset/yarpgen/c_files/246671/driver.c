#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2350693367U;
unsigned int var_1 = 3071594340U;
short var_2 = (short)3389;
unsigned char var_3 = (unsigned char)85;
unsigned int var_7 = 3890837821U;
signed char var_8 = (signed char)123;
unsigned int var_11 = 1042269689U;
int zero = 0;
unsigned long long int var_15 = 9171572916981657428ULL;
int var_16 = -196106218;
unsigned long long int var_17 = 17161888465848358473ULL;
unsigned int var_18 = 1603768764U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
