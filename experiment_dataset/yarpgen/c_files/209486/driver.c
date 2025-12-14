#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36798;
unsigned char var_1 = (unsigned char)115;
long long int var_4 = -1689368441024491395LL;
int var_5 = 179093157;
unsigned char var_10 = (unsigned char)71;
int zero = 0;
int var_11 = 1559252524;
unsigned short var_12 = (unsigned short)21056;
unsigned short var_13 = (unsigned short)44572;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
