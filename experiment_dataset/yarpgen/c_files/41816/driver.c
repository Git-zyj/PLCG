#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10655;
unsigned int var_2 = 2961285552U;
signed char var_7 = (signed char)122;
unsigned long long int var_8 = 3960367413440177121ULL;
unsigned int var_9 = 1867342655U;
int zero = 0;
unsigned short var_10 = (unsigned short)29863;
unsigned char var_11 = (unsigned char)137;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
