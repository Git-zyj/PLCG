#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9443;
short var_5 = (short)-6064;
unsigned short var_9 = (unsigned short)25337;
signed char var_11 = (signed char)76;
unsigned long long int var_12 = 6468401536635895352ULL;
unsigned char var_14 = (unsigned char)53;
unsigned short var_15 = (unsigned short)12532;
unsigned short var_16 = (unsigned short)10884;
unsigned long long int var_17 = 1641241679254323820ULL;
int zero = 0;
unsigned long long int var_18 = 15726448337940898990ULL;
int var_19 = 57307457;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
