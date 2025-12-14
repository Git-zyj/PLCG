#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19481;
unsigned short var_4 = (unsigned short)11166;
long long int var_6 = 5076218499378627285LL;
long long int var_9 = -8126247857147543314LL;
short var_13 = (short)-12211;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)30400;
unsigned char var_18 = (unsigned char)109;
unsigned char var_19 = (unsigned char)50;
unsigned short var_20 = (unsigned short)43796;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
