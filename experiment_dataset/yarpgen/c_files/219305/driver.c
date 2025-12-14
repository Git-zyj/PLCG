#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
short var_2 = (short)-4528;
unsigned int var_9 = 1635797436U;
unsigned short var_12 = (unsigned short)56596;
int zero = 0;
long long int var_13 = 6381162553434830696LL;
signed char var_14 = (signed char)-49;
unsigned short var_15 = (unsigned short)64737;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
