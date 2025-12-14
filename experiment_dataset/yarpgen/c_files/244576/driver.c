#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-66;
long long int var_4 = -3441751413066817982LL;
_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)-4;
signed char var_9 = (signed char)-20;
int zero = 0;
long long int var_11 = -1008277712405985566LL;
signed char var_12 = (signed char)-7;
short var_13 = (short)-16535;
long long int var_14 = 6934192853996155190LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
