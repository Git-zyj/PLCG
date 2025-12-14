#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38253;
unsigned char var_4 = (unsigned char)76;
int var_6 = 1915328571;
unsigned long long int var_9 = 14059648795042724168ULL;
unsigned char var_11 = (unsigned char)70;
short var_12 = (short)-31165;
int zero = 0;
signed char var_15 = (signed char)-113;
unsigned char var_16 = (unsigned char)149;
short var_17 = (short)-20587;
signed char var_18 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
