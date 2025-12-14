#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47723;
unsigned char var_3 = (unsigned char)119;
unsigned long long int var_4 = 2742634571937052045ULL;
int var_5 = 593134954;
unsigned short var_10 = (unsigned short)29418;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)18577;
int zero = 0;
short var_15 = (short)-3128;
unsigned char var_16 = (unsigned char)230;
long long int var_17 = 5289607216218064984LL;
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
