#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-40;
signed char var_1 = (signed char)-43;
int var_2 = 482231694;
int var_4 = 535071577;
short var_10 = (short)22336;
int zero = 0;
int var_11 = 805181207;
short var_12 = (short)-31795;
short var_13 = (short)22766;
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
