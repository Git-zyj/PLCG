#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24798;
unsigned short var_5 = (unsigned short)7675;
int var_7 = 1258905808;
short var_10 = (short)-20643;
unsigned short var_13 = (unsigned short)15220;
int zero = 0;
unsigned char var_15 = (unsigned char)101;
short var_16 = (short)-1275;
short var_17 = (short)-12266;
unsigned int var_18 = 3223507371U;
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
