#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16717;
unsigned char var_1 = (unsigned char)209;
signed char var_3 = (signed char)-100;
unsigned char var_4 = (unsigned char)246;
unsigned short var_5 = (unsigned short)13139;
unsigned short var_7 = (unsigned short)17646;
unsigned short var_9 = (unsigned short)24637;
int zero = 0;
signed char var_13 = (signed char)19;
unsigned char var_14 = (unsigned char)2;
unsigned char var_15 = (unsigned char)113;
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
