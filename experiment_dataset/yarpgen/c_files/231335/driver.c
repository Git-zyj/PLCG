#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28073;
unsigned short var_3 = (unsigned short)29971;
short var_6 = (short)-16502;
unsigned char var_7 = (unsigned char)83;
unsigned int var_9 = 2451145617U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)145;
unsigned long long int var_18 = 8913332041452703882ULL;
int var_19 = 1544118463;
short var_20 = (short)-16215;
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
