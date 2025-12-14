#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)93;
short var_5 = (short)-23429;
_Bool var_6 = (_Bool)1;
short var_7 = (short)25316;
unsigned short var_14 = (unsigned short)50946;
int var_18 = 1455769337;
int zero = 0;
short var_20 = (short)-16663;
signed char var_21 = (signed char)(-127 - 1);
int var_22 = 1408828345;
long long int var_23 = -1654051817717939075LL;
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
