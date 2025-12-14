#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28457;
unsigned char var_4 = (unsigned char)25;
int var_7 = 1544247120;
unsigned int var_8 = 379688170U;
long long int var_16 = -3393799558633828947LL;
int zero = 0;
unsigned char var_17 = (unsigned char)183;
unsigned short var_18 = (unsigned short)12938;
int var_19 = 1878257295;
short var_20 = (short)30546;
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
