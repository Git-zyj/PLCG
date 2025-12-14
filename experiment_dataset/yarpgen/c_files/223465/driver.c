#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)10955;
short var_6 = (short)26567;
short var_9 = (short)-497;
int zero = 0;
long long int var_14 = -7521071966649225479LL;
long long int var_15 = -1138992754858140929LL;
short var_16 = (short)-12655;
signed char var_17 = (signed char)3;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
