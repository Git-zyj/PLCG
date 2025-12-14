#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)4765;
signed char var_6 = (signed char)-63;
unsigned short var_7 = (unsigned short)12573;
int var_8 = -453217126;
int var_9 = -106516090;
int var_11 = 2101372480;
short var_14 = (short)-16416;
int zero = 0;
unsigned short var_20 = (unsigned short)41442;
short var_21 = (short)12090;
short var_22 = (short)-30051;
short var_23 = (short)22926;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
