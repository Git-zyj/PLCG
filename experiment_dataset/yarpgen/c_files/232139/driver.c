#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34610;
short var_2 = (short)442;
unsigned short var_3 = (unsigned short)62888;
long long int var_7 = 5683553116303704552LL;
unsigned char var_9 = (unsigned char)134;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)198;
int zero = 0;
unsigned short var_17 = (unsigned short)55604;
unsigned short var_18 = (unsigned short)43472;
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
