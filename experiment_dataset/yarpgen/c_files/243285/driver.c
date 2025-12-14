#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -6111074432289004594LL;
short var_9 = (short)-311;
long long int var_12 = -1884515443437597049LL;
unsigned int var_14 = 723459773U;
long long int var_15 = -3425550705111624324LL;
unsigned char var_17 = (unsigned char)57;
int zero = 0;
unsigned char var_19 = (unsigned char)119;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-8292;
void init() {
}

void checksum() {
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
