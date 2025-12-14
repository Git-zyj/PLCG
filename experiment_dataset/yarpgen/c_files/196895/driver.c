#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
unsigned short var_2 = (unsigned short)55040;
short var_4 = (short)17195;
unsigned char var_7 = (unsigned char)37;
short var_8 = (short)-7475;
int zero = 0;
short var_16 = (short)17480;
unsigned char var_17 = (unsigned char)91;
long long int var_18 = 8928288571354338691LL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
