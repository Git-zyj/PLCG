#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 710316105;
int var_5 = -1230899105;
unsigned char var_6 = (unsigned char)198;
int var_7 = 1105074780;
unsigned int var_9 = 1948171981U;
int zero = 0;
signed char var_10 = (signed char)4;
int var_11 = -140610030;
short var_12 = (short)2868;
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
