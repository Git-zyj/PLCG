#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -9212774071523621132LL;
short var_9 = (short)-6203;
signed char var_14 = (signed char)111;
short var_16 = (short)-4554;
unsigned int var_18 = 3287260736U;
int zero = 0;
int var_19 = 196997531;
unsigned char var_20 = (unsigned char)173;
unsigned long long int var_21 = 7619129008959781217ULL;
int var_22 = 1516914887;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
