#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31752;
unsigned char var_4 = (unsigned char)228;
unsigned short var_5 = (unsigned short)7446;
unsigned char var_10 = (unsigned char)45;
unsigned char var_12 = (unsigned char)249;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)50;
int zero = 0;
unsigned int var_17 = 435051937U;
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
