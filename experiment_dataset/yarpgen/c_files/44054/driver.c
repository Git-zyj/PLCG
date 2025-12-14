#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -500672098;
unsigned short var_1 = (unsigned short)43414;
int var_2 = 619406937;
unsigned short var_3 = (unsigned short)28080;
unsigned char var_6 = (unsigned char)241;
unsigned short var_9 = (unsigned short)2004;
signed char var_10 = (signed char)90;
int zero = 0;
unsigned short var_11 = (unsigned short)18195;
short var_12 = (short)27850;
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
