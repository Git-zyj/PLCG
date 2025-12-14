#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 619723154U;
unsigned long long int var_2 = 18068876019516574502ULL;
unsigned int var_7 = 2417410281U;
short var_11 = (short)-28125;
unsigned long long int var_12 = 7108057961232485103ULL;
int zero = 0;
long long int var_15 = 500123793358030679LL;
unsigned long long int var_16 = 9850211046011521868ULL;
short var_17 = (short)6300;
unsigned int var_18 = 2771836226U;
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
