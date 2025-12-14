#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
short var_3 = (short)3130;
int var_9 = -1435114594;
short var_12 = (short)14983;
long long int var_13 = 6937096270405270220LL;
int zero = 0;
int var_14 = 85492680;
short var_15 = (short)19785;
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
