#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12326;
unsigned char var_2 = (unsigned char)65;
signed char var_3 = (signed char)-79;
long long int var_5 = 3098990127988632233LL;
unsigned char var_6 = (unsigned char)149;
unsigned char var_7 = (unsigned char)222;
unsigned long long int var_11 = 12362600841342901809ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)27095;
unsigned int var_14 = 460594980U;
signed char var_15 = (signed char)2;
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
