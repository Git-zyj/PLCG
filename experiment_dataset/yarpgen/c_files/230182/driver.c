#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42473;
unsigned long long int var_3 = 2478384111384024029ULL;
unsigned int var_5 = 248409535U;
unsigned char var_7 = (unsigned char)199;
unsigned short var_8 = (unsigned short)54936;
unsigned short var_12 = (unsigned short)52745;
int zero = 0;
long long int var_13 = -9084161178569884230LL;
long long int var_14 = -7497604253028034427LL;
int var_15 = 404780571;
short var_16 = (short)-1221;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
