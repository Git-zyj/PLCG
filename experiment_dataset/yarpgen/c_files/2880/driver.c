#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)2570;
unsigned char var_10 = (unsigned char)75;
unsigned int var_11 = 195083157U;
unsigned long long int var_13 = 16839264402996987166ULL;
unsigned short var_17 = (unsigned short)19548;
long long int var_18 = -4546457131692003200LL;
int zero = 0;
long long int var_20 = 2321408167290429592LL;
unsigned int var_21 = 1292366753U;
unsigned short var_22 = (unsigned short)16707;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
