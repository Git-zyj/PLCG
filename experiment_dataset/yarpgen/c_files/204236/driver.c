#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)8468;
unsigned short var_3 = (unsigned short)53793;
short var_4 = (short)32101;
int var_5 = -534963361;
int var_9 = 329525482;
short var_11 = (short)-9608;
int var_13 = -1100938300;
int zero = 0;
signed char var_15 = (signed char)95;
int var_16 = 2085700347;
unsigned char var_17 = (unsigned char)69;
short var_18 = (short)5062;
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
