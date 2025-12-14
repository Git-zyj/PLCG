#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26292;
short var_1 = (short)-17019;
short var_4 = (short)13156;
short var_6 = (short)-20607;
short var_8 = (short)2325;
short var_9 = (short)-17801;
short var_14 = (short)22494;
short var_15 = (short)4177;
short var_16 = (short)13552;
int zero = 0;
short var_19 = (short)27883;
short var_20 = (short)14778;
void init() {
}

void checksum() {
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
