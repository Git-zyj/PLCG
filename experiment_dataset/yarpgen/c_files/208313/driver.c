#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
unsigned long long int var_2 = 12519700599305611946ULL;
unsigned long long int var_5 = 502165923280633365ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)12572;
unsigned char var_15 = (unsigned char)124;
unsigned char var_19 = (unsigned char)203;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-17034;
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
