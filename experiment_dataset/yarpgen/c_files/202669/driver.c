#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)141;
unsigned char var_1 = (unsigned char)100;
unsigned long long int var_5 = 17600899546656587031ULL;
unsigned int var_6 = 4053925033U;
signed char var_8 = (signed char)-91;
short var_9 = (short)-5730;
unsigned int var_10 = 1463064835U;
int zero = 0;
unsigned char var_12 = (unsigned char)70;
int var_13 = 668956129;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
