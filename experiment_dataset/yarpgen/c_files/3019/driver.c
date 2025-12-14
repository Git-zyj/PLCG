#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23535;
long long int var_3 = 8352395263174992509LL;
signed char var_4 = (signed char)77;
short var_6 = (short)3703;
long long int var_8 = -7033174339286265846LL;
unsigned short var_9 = (unsigned short)19060;
unsigned short var_10 = (unsigned short)42600;
int zero = 0;
short var_11 = (short)527;
short var_12 = (short)-28356;
unsigned short var_13 = (unsigned short)5244;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
