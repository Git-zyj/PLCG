#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-8157;
signed char var_8 = (signed char)-98;
unsigned long long int var_9 = 6070328601857562740ULL;
signed char var_12 = (signed char)-34;
unsigned int var_13 = 2235071649U;
unsigned char var_15 = (unsigned char)102;
unsigned short var_19 = (unsigned short)27915;
int zero = 0;
signed char var_20 = (signed char)49;
int var_21 = -1498588538;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
