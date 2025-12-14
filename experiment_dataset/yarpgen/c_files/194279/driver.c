#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35450;
unsigned short var_6 = (unsigned short)18358;
int var_7 = 1212236965;
int var_9 = 987836384;
unsigned char var_11 = (unsigned char)165;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -1526430691;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
