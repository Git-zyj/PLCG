#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -457516347;
unsigned short var_5 = (unsigned short)28210;
int var_8 = -1153709589;
int var_9 = 1724683716;
unsigned char var_12 = (unsigned char)214;
unsigned char var_15 = (unsigned char)88;
int zero = 0;
unsigned short var_17 = (unsigned short)1550;
unsigned char var_18 = (unsigned char)207;
void init() {
}

void checksum() {
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
