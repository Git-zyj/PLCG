#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 663354799U;
short var_5 = (short)27957;
short var_6 = (short)7982;
short var_7 = (short)-12793;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)9;
int zero = 0;
short var_11 = (short)-26883;
short var_12 = (short)9432;
int var_13 = -1886455603;
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
