#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15390;
int var_3 = 1827302091;
int var_5 = -291834233;
int var_6 = 347968732;
int var_8 = -2055202356;
short var_9 = (short)31975;
unsigned short var_10 = (unsigned short)41209;
int zero = 0;
unsigned short var_11 = (unsigned short)14203;
unsigned short var_12 = (unsigned short)42484;
short var_13 = (short)29350;
int var_14 = -611924751;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
