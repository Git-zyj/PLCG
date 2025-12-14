#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -843559703;
_Bool var_2 = (_Bool)1;
unsigned short var_6 = (unsigned short)2036;
unsigned char var_9 = (unsigned char)145;
unsigned char var_10 = (unsigned char)11;
unsigned char var_11 = (unsigned char)45;
int zero = 0;
signed char var_14 = (signed char)27;
unsigned short var_15 = (unsigned short)51106;
unsigned char var_16 = (unsigned char)130;
void init() {
}

void checksum() {
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
