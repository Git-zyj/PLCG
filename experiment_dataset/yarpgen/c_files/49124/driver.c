#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -651995834;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)118;
unsigned char var_11 = (unsigned char)178;
int zero = 0;
unsigned int var_13 = 4006792255U;
unsigned short var_14 = (unsigned short)2951;
_Bool var_15 = (_Bool)1;
int var_16 = 2052202197;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
