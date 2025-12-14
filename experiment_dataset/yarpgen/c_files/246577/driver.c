#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29831;
unsigned char var_1 = (unsigned char)100;
long long int var_2 = -5373264476675403927LL;
unsigned char var_3 = (unsigned char)127;
unsigned char var_4 = (unsigned char)221;
long long int var_5 = -4232832477513062942LL;
int var_7 = -1457697023;
signed char var_8 = (signed char)37;
int zero = 0;
unsigned char var_10 = (unsigned char)53;
unsigned long long int var_11 = 5631710164595598386ULL;
unsigned short var_12 = (unsigned short)62869;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
