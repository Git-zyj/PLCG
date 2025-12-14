#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
long long int var_3 = -6460826286532280306LL;
unsigned long long int var_6 = 10596512776489549122ULL;
short var_7 = (short)26289;
unsigned int var_12 = 825776498U;
int zero = 0;
unsigned long long int var_17 = 7506770776130008882ULL;
unsigned char var_18 = (unsigned char)37;
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
