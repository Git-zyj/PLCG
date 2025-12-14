#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 366997773U;
unsigned char var_7 = (unsigned char)245;
signed char var_9 = (signed char)-111;
signed char var_10 = (signed char)-5;
int zero = 0;
unsigned long long int var_12 = 17756028449494499591ULL;
unsigned char var_13 = (unsigned char)130;
unsigned long long int var_14 = 15993373689300208255ULL;
unsigned short var_15 = (unsigned short)43471;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
