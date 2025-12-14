#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)186;
unsigned int var_6 = 945316600U;
int var_9 = 385703048;
unsigned short var_12 = (unsigned short)27515;
unsigned char var_15 = (unsigned char)97;
int zero = 0;
unsigned int var_17 = 1720698386U;
unsigned short var_18 = (unsigned short)60377;
unsigned short var_19 = (unsigned short)50127;
unsigned short var_20 = (unsigned short)16223;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
