#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26077;
short var_6 = (short)1469;
unsigned char var_9 = (unsigned char)100;
signed char var_12 = (signed char)-53;
unsigned int var_13 = 1667237825U;
int var_14 = -426716855;
int zero = 0;
unsigned char var_15 = (unsigned char)236;
int var_16 = -1296825005;
unsigned char var_17 = (unsigned char)180;
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
