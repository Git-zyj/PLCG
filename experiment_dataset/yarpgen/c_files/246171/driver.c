#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1039526451803620680LL;
signed char var_3 = (signed char)-119;
short var_4 = (short)-23326;
short var_6 = (short)32617;
unsigned int var_8 = 697811271U;
unsigned int var_12 = 3873320686U;
int var_13 = -1873681397;
int zero = 0;
long long int var_17 = 3710832285276842425LL;
unsigned int var_18 = 4074654134U;
long long int var_19 = 8920822086676063833LL;
void init() {
}

void checksum() {
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
