#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1015010569U;
unsigned short var_3 = (unsigned short)25202;
_Bool var_4 = (_Bool)1;
unsigned long long int var_8 = 7567656842018951069ULL;
unsigned short var_9 = (unsigned short)34064;
unsigned short var_13 = (unsigned short)54252;
unsigned short var_16 = (unsigned short)11078;
int zero = 0;
unsigned char var_17 = (unsigned char)51;
_Bool var_18 = (_Bool)0;
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
