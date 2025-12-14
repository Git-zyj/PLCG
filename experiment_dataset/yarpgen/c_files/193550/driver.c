#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15646913391389262888ULL;
signed char var_1 = (signed char)-30;
short var_8 = (short)-23102;
unsigned long long int var_14 = 5838407352881905935ULL;
int zero = 0;
unsigned long long int var_15 = 16852443640894250041ULL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3988171302U;
unsigned char var_18 = (unsigned char)88;
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
