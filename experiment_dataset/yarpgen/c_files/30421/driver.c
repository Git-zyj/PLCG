#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
long long int var_9 = -2534945802434019794LL;
unsigned char var_13 = (unsigned char)149;
int zero = 0;
long long int var_15 = 7006167826503865610LL;
short var_16 = (short)-4020;
unsigned char var_17 = (unsigned char)15;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
