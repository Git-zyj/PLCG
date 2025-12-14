#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12764;
long long int var_2 = 8903480625173859732LL;
long long int var_3 = 2837789038894169755LL;
long long int var_6 = 3776420419455723448LL;
short var_8 = (short)4648;
short var_10 = (short)-26213;
int zero = 0;
unsigned char var_15 = (unsigned char)203;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)142;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
