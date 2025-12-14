#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)43;
short var_6 = (short)-6724;
unsigned long long int var_19 = 8646163498360556266ULL;
int zero = 0;
int var_20 = -1669133670;
unsigned long long int var_21 = 12915229958136900621ULL;
unsigned long long int var_22 = 16952196808787590534ULL;
unsigned short var_23 = (unsigned short)20823;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
