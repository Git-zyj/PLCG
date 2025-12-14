#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -627541363;
unsigned int var_5 = 3272117860U;
_Bool var_7 = (_Bool)1;
int var_9 = 1388816530;
short var_10 = (short)-32370;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 633717128144799151ULL;
short var_13 = (short)19291;
int var_14 = -1929659372;
short var_15 = (short)-11334;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
