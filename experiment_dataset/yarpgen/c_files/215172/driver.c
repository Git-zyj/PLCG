#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4678020582937861393LL;
unsigned long long int var_4 = 8402557949381372530ULL;
long long int var_7 = -5275570359617551954LL;
short var_9 = (short)-25717;
int var_10 = -148382629;
unsigned char var_13 = (unsigned char)25;
unsigned short var_14 = (unsigned short)57983;
int zero = 0;
signed char var_15 = (signed char)127;
short var_16 = (short)12632;
int var_17 = -747579239;
unsigned int var_18 = 512295855U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
