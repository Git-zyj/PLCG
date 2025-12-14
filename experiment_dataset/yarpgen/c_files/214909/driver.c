#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27456;
short var_1 = (short)-5433;
short var_2 = (short)18926;
short var_3 = (short)-7146;
short var_4 = (short)27944;
short var_5 = (short)-30822;
short var_6 = (short)-12681;
short var_7 = (short)18403;
short var_9 = (short)-26078;
short var_10 = (short)-10608;
short var_12 = (short)23398;
int zero = 0;
short var_16 = (short)22;
short var_17 = (short)15224;
short var_18 = (short)22524;
short var_19 = (short)28882;
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
