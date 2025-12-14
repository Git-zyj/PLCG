#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1976;
unsigned char var_6 = (unsigned char)58;
long long int var_9 = 8816011970841345355LL;
unsigned short var_11 = (unsigned short)27130;
short var_12 = (short)-31080;
int zero = 0;
unsigned long long int var_13 = 4671166259300694144ULL;
unsigned int var_14 = 1935621016U;
unsigned char var_15 = (unsigned char)17;
unsigned short var_16 = (unsigned short)31750;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
