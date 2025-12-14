#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1750034976;
long long int var_3 = -3413348426338402168LL;
long long int var_5 = -4529657447237106144LL;
short var_7 = (short)-15603;
short var_8 = (short)-23458;
int var_9 = -964389485;
int zero = 0;
long long int var_11 = -9205520188525072227LL;
int var_12 = 1534229694;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
