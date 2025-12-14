#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)179;
unsigned long long int var_2 = 17189332080469303758ULL;
short var_3 = (short)32062;
long long int var_5 = -258656843384071447LL;
unsigned char var_10 = (unsigned char)127;
unsigned long long int var_12 = 976320494941431207ULL;
unsigned char var_13 = (unsigned char)33;
int zero = 0;
unsigned char var_14 = (unsigned char)212;
unsigned char var_15 = (unsigned char)227;
unsigned int var_16 = 907018083U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
