#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)65179;
_Bool var_9 = (_Bool)1;
long long int var_10 = -948432506481454739LL;
unsigned int var_15 = 1359410681U;
int zero = 0;
unsigned char var_17 = (unsigned char)184;
short var_18 = (short)17060;
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
