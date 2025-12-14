#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5311836219668734732ULL;
int var_4 = -609470187;
unsigned short var_6 = (unsigned short)48284;
unsigned short var_13 = (unsigned short)1764;
int zero = 0;
short var_15 = (short)12562;
unsigned int var_16 = 901157169U;
unsigned long long int var_17 = 18154952118627007348ULL;
unsigned long long int var_18 = 8837018557707562078ULL;
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
