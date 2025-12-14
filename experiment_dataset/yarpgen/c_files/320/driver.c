#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)610;
signed char var_5 = (signed char)64;
unsigned char var_9 = (unsigned char)35;
_Bool var_12 = (_Bool)0;
unsigned int var_15 = 2992648301U;
int zero = 0;
short var_17 = (short)-14449;
int var_18 = 1995661467;
short var_19 = (short)-5093;
short var_20 = (short)19050;
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
