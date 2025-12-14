#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2421256745714336957LL;
short var_3 = (short)-5180;
unsigned short var_8 = (unsigned short)4958;
long long int var_9 = 3510632633429260604LL;
unsigned char var_10 = (unsigned char)133;
signed char var_13 = (signed char)-117;
unsigned char var_15 = (unsigned char)207;
int zero = 0;
unsigned int var_16 = 3409929674U;
unsigned char var_17 = (unsigned char)247;
void init() {
}

void checksum() {
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
