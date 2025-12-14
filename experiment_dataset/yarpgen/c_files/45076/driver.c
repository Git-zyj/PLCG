#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3196153233U;
long long int var_7 = -8904019482381323221LL;
short var_9 = (short)18885;
long long int var_12 = 3175407381730939859LL;
int zero = 0;
unsigned int var_13 = 2745132306U;
short var_14 = (short)-32388;
unsigned short var_15 = (unsigned short)13523;
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
