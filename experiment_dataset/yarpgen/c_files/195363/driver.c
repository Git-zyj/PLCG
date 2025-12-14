#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
unsigned int var_4 = 1221755475U;
short var_6 = (short)-20364;
long long int var_9 = -7112775447054460241LL;
short var_10 = (short)25485;
signed char var_12 = (signed char)-103;
int zero = 0;
unsigned int var_13 = 3588314574U;
signed char var_14 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
