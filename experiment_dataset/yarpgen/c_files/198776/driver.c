#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3588;
unsigned short var_2 = (unsigned short)48222;
int var_9 = 830855453;
unsigned int var_11 = 3913660360U;
signed char var_13 = (signed char)-69;
int zero = 0;
unsigned char var_20 = (unsigned char)190;
long long int var_21 = -2698019265508137267LL;
unsigned int var_22 = 1210467757U;
short var_23 = (short)-30937;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
