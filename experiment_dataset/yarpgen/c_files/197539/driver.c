#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18;
unsigned char var_6 = (unsigned char)176;
short var_9 = (short)-11505;
short var_13 = (short)-6709;
unsigned int var_14 = 147523000U;
short var_15 = (short)9881;
int zero = 0;
unsigned char var_16 = (unsigned char)138;
unsigned short var_17 = (unsigned short)22509;
int var_18 = 1458597926;
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
