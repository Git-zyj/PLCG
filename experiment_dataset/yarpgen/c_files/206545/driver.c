#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)28732;
int var_6 = -800927227;
short var_8 = (short)19678;
signed char var_11 = (signed char)-5;
int zero = 0;
unsigned short var_16 = (unsigned short)28675;
short var_17 = (short)-31196;
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
