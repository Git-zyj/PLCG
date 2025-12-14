#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16687;
short var_7 = (short)-1682;
short var_9 = (short)-10131;
short var_16 = (short)-3563;
short var_17 = (short)23338;
int zero = 0;
short var_18 = (short)-25875;
short var_19 = (short)-14915;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
