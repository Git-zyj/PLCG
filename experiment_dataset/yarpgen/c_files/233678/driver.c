#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61696;
unsigned long long int var_5 = 1060488842153485953ULL;
unsigned int var_11 = 4114654881U;
int var_12 = -859715268;
int zero = 0;
short var_13 = (short)25456;
unsigned long long int var_14 = 5170199619317946211ULL;
unsigned int var_15 = 279467786U;
void init() {
}

void checksum() {
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
