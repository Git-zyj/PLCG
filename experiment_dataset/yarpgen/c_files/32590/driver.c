#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -238055043;
signed char var_8 = (signed char)-20;
int var_11 = 898946553;
int zero = 0;
signed char var_14 = (signed char)-49;
int var_15 = 878365399;
short var_16 = (short)-26458;
unsigned short var_17 = (unsigned short)5319;
unsigned char var_18 = (unsigned char)90;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
