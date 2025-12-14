#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 473836872U;
short var_12 = (short)31844;
short var_15 = (short)26652;
int zero = 0;
unsigned int var_16 = 420591460U;
short var_17 = (short)8318;
short var_18 = (short)31573;
short var_19 = (short)-8676;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
