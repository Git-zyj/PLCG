#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -327607396;
long long int var_3 = 8979250132900708144LL;
signed char var_5 = (signed char)127;
signed char var_8 = (signed char)36;
unsigned char var_10 = (unsigned char)219;
int zero = 0;
unsigned char var_11 = (unsigned char)10;
int var_12 = -948175069;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
