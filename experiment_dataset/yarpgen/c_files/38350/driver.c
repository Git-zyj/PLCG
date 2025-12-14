#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)97;
unsigned char var_3 = (unsigned char)60;
short var_4 = (short)7340;
unsigned short var_8 = (unsigned short)8779;
unsigned long long int var_12 = 2025352599150187414ULL;
long long int var_14 = 2128625530968389984LL;
int zero = 0;
unsigned short var_17 = (unsigned short)22701;
unsigned char var_18 = (unsigned char)202;
void init() {
}

void checksum() {
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
