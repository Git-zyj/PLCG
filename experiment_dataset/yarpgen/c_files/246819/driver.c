#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45514;
unsigned short var_3 = (unsigned short)34209;
unsigned short var_5 = (unsigned short)44639;
unsigned short var_6 = (unsigned short)39976;
unsigned short var_8 = (unsigned short)25895;
unsigned short var_10 = (unsigned short)15666;
unsigned short var_11 = (unsigned short)8635;
unsigned short var_13 = (unsigned short)32043;
int zero = 0;
unsigned short var_16 = (unsigned short)35098;
unsigned short var_17 = (unsigned short)44051;
unsigned short var_18 = (unsigned short)54113;
unsigned short var_19 = (unsigned short)25135;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
