#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
unsigned char var_1 = (unsigned char)153;
long long int var_2 = 1339388213384542154LL;
unsigned int var_6 = 693193256U;
signed char var_9 = (signed char)103;
int zero = 0;
unsigned char var_10 = (unsigned char)123;
short var_11 = (short)-20598;
signed char var_12 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
