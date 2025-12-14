#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)28635;
signed char var_3 = (signed char)-63;
long long int var_5 = -7473791388250424140LL;
short var_6 = (short)-6691;
int var_7 = 2091743609;
int var_9 = -900927122;
int zero = 0;
short var_10 = (short)22424;
short var_11 = (short)2407;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
