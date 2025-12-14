#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1344467384;
unsigned long long int var_6 = 1552672625127591158ULL;
short var_7 = (short)-31298;
short var_9 = (short)-30506;
unsigned long long int var_10 = 4898475309013077567ULL;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-82;
signed char var_14 = (signed char)-73;
int zero = 0;
unsigned int var_16 = 1126220948U;
unsigned char var_17 = (unsigned char)94;
void init() {
}

void checksum() {
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
