#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28736;
short var_1 = (short)7599;
short var_2 = (short)-4610;
short var_3 = (short)864;
short var_5 = (short)28697;
short var_6 = (short)25589;
short var_7 = (short)18764;
short var_10 = (short)-19355;
int zero = 0;
short var_13 = (short)16569;
short var_14 = (short)-1933;
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
