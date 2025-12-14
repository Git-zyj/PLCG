#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
int var_6 = -1217410195;
short var_7 = (short)19644;
signed char var_8 = (signed char)101;
int var_11 = -1332978929;
unsigned short var_15 = (unsigned short)57777;
unsigned int var_17 = 2460800913U;
int zero = 0;
unsigned char var_19 = (unsigned char)135;
_Bool var_20 = (_Bool)1;
short var_21 = (short)1168;
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
