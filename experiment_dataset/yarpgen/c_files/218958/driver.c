#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)8;
unsigned char var_9 = (unsigned char)117;
long long int var_10 = 9205558138551089226LL;
long long int var_12 = 8699061751397599628LL;
int var_13 = -1204242306;
signed char var_14 = (signed char)-41;
int zero = 0;
signed char var_15 = (signed char)25;
short var_16 = (short)7528;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
