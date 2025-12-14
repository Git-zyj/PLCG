#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)74;
signed char var_3 = (signed char)95;
short var_5 = (short)18742;
int var_12 = -1900405309;
int zero = 0;
unsigned short var_13 = (unsigned short)40455;
unsigned short var_14 = (unsigned short)62862;
short var_15 = (short)-25619;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
