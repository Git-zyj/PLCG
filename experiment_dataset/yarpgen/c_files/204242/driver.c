#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)148;
short var_7 = (short)11047;
long long int var_12 = 3831170179079249007LL;
unsigned char var_14 = (unsigned char)106;
int var_16 = -206037103;
unsigned int var_18 = 3273658330U;
int zero = 0;
unsigned short var_19 = (unsigned short)13499;
long long int var_20 = -7147199077629412981LL;
void init() {
}

void checksum() {
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
