#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)47;
unsigned short var_3 = (unsigned short)37648;
unsigned char var_4 = (unsigned char)114;
unsigned short var_5 = (unsigned short)41892;
int var_10 = -384023678;
long long int var_11 = 4228324389581090886LL;
int zero = 0;
unsigned char var_14 = (unsigned char)245;
unsigned short var_15 = (unsigned short)47092;
int var_16 = -1747386196;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
