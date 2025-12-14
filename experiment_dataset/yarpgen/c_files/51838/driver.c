#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-100;
_Bool var_1 = (_Bool)0;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)25;
signed char var_11 = (signed char)72;
signed char var_12 = (signed char)96;
short var_13 = (short)-27265;
unsigned long long int var_15 = 12716011919705549808ULL;
int zero = 0;
signed char var_16 = (signed char)90;
long long int var_17 = 8297572983941677120LL;
int var_18 = -2011774558;
signed char var_19 = (signed char)113;
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
