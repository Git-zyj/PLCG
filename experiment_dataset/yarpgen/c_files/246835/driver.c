#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31255;
short var_6 = (short)-20608;
long long int var_10 = 7164497904128669856LL;
int var_11 = -1214478241;
short var_17 = (short)25650;
int zero = 0;
int var_19 = -44057935;
short var_20 = (short)-28683;
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
