#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)192;
signed char var_2 = (signed char)-50;
unsigned char var_5 = (unsigned char)33;
long long int var_6 = 1441959916139733798LL;
long long int var_9 = 4658630524075423898LL;
short var_10 = (short)-18693;
int zero = 0;
unsigned short var_11 = (unsigned short)35187;
long long int var_12 = 3038656090497805017LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
