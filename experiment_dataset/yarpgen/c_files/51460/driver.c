#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12950;
int var_3 = 1451498128;
unsigned char var_4 = (unsigned char)238;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)35;
unsigned char var_10 = (unsigned char)13;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)217;
short var_21 = (short)-254;
void init() {
}

void checksum() {
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
