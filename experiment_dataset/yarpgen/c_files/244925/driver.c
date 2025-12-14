#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3399128923U;
unsigned int var_3 = 424274757U;
unsigned short var_4 = (unsigned short)6642;
long long int var_5 = 4186155789583628102LL;
unsigned short var_7 = (unsigned short)36392;
int var_8 = 2131212436;
unsigned char var_9 = (unsigned char)133;
int zero = 0;
unsigned short var_10 = (unsigned short)8393;
int var_11 = -674367124;
short var_12 = (short)-10212;
unsigned int var_13 = 3450301226U;
unsigned short var_14 = (unsigned short)36547;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
