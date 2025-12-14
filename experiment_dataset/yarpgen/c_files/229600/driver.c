#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55318;
unsigned char var_2 = (unsigned char)154;
unsigned int var_5 = 102180540U;
unsigned char var_7 = (unsigned char)119;
unsigned int var_9 = 1645711880U;
int zero = 0;
signed char var_11 = (signed char)72;
short var_12 = (short)2445;
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
