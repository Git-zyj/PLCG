#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-67;
short var_5 = (short)22962;
long long int var_7 = -5602270321879531203LL;
unsigned char var_9 = (unsigned char)55;
int zero = 0;
signed char var_14 = (signed char)69;
long long int var_15 = 2538169311098640304LL;
void init() {
}

void checksum() {
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
