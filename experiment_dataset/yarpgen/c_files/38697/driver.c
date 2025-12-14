#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)24;
unsigned long long int var_3 = 1984270373827691096ULL;
unsigned char var_5 = (unsigned char)42;
unsigned long long int var_8 = 10870820810105854175ULL;
unsigned char var_9 = (unsigned char)206;
signed char var_10 = (signed char)96;
unsigned char var_12 = (unsigned char)149;
signed char var_13 = (signed char)14;
long long int var_14 = 8334147913755670535LL;
int zero = 0;
unsigned char var_15 = (unsigned char)65;
unsigned long long int var_16 = 5736218260964130556ULL;
short var_17 = (short)-21605;
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
