#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)18;
unsigned char var_5 = (unsigned char)139;
unsigned short var_11 = (unsigned short)56282;
short var_13 = (short)19329;
int var_14 = 1444958416;
int zero = 0;
signed char var_15 = (signed char)92;
signed char var_16 = (signed char)103;
unsigned short var_17 = (unsigned short)14655;
void init() {
}

void checksum() {
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
