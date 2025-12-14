#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6665;
short var_2 = (short)-5622;
short var_6 = (short)8723;
short var_7 = (short)-24250;
int zero = 0;
short var_11 = (short)-4429;
short var_12 = (short)-682;
short var_13 = (short)-16393;
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
