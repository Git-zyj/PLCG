#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)88;
unsigned long long int var_4 = 2259906537702974876ULL;
unsigned short var_5 = (unsigned short)10580;
int var_7 = -1388786065;
int var_12 = 1749599218;
unsigned int var_13 = 851910341U;
int var_14 = 1330732248;
int zero = 0;
short var_15 = (short)29266;
int var_16 = 606586295;
signed char var_17 = (signed char)-95;
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
