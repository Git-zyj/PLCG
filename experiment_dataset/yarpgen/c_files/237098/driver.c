#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1346;
short var_10 = (short)17103;
unsigned char var_13 = (unsigned char)138;
unsigned short var_15 = (unsigned short)54116;
int zero = 0;
short var_16 = (short)9438;
short var_17 = (short)12854;
unsigned int var_18 = 1932061565U;
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
