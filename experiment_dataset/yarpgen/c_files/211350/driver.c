#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 582504961;
unsigned int var_9 = 4019466288U;
unsigned int var_10 = 3706792791U;
long long int var_18 = -7209076449191684379LL;
short var_19 = (short)-4868;
int zero = 0;
unsigned short var_20 = (unsigned short)61509;
unsigned char var_21 = (unsigned char)15;
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
