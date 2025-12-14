#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57106;
unsigned short var_3 = (unsigned short)55830;
long long int var_7 = -8899925343185067619LL;
long long int var_8 = -4770195129343780263LL;
long long int var_15 = 4317613744379008006LL;
short var_17 = (short)-16347;
int zero = 0;
short var_18 = (short)11036;
unsigned short var_19 = (unsigned short)52991;
short var_20 = (short)-19920;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
