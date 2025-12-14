#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26720;
short var_3 = (short)2496;
_Bool var_12 = (_Bool)1;
int var_15 = 1287405630;
int zero = 0;
unsigned char var_17 = (unsigned char)102;
unsigned char var_18 = (unsigned char)238;
unsigned char var_19 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
