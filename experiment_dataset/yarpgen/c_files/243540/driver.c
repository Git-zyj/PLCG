#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13756827464978724472ULL;
signed char var_6 = (signed char)-28;
unsigned short var_9 = (unsigned short)45381;
unsigned int var_10 = 2315796039U;
unsigned char var_12 = (unsigned char)72;
unsigned short var_15 = (unsigned short)37382;
int zero = 0;
unsigned short var_16 = (unsigned short)31973;
int var_17 = -88901879;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
