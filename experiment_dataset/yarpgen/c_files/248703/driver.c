#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1107125890;
unsigned int var_4 = 3497838375U;
unsigned char var_5 = (unsigned char)246;
int var_9 = -127523851;
int var_10 = -210315201;
int zero = 0;
unsigned int var_12 = 2742526908U;
unsigned int var_13 = 1614642331U;
int var_14 = 2071162526;
void init() {
}

void checksum() {
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
