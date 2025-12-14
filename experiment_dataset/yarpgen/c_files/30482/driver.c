#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)225;
unsigned short var_3 = (unsigned short)63902;
short var_4 = (short)5031;
short var_6 = (short)-7080;
short var_9 = (short)21661;
unsigned char var_12 = (unsigned char)18;
int zero = 0;
unsigned short var_14 = (unsigned short)38725;
int var_15 = -1835353960;
void init() {
}

void checksum() {
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
