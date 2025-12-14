#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1679431911;
unsigned int var_1 = 2790772971U;
_Bool var_2 = (_Bool)0;
short var_7 = (short)-7070;
unsigned int var_8 = 1826873282U;
short var_9 = (short)-20249;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-1826;
int zero = 0;
int var_13 = 116501572;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
