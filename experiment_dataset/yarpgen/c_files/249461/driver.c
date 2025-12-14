#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)107;
unsigned int var_2 = 4130990750U;
signed char var_3 = (signed char)102;
int var_4 = -1976225630;
unsigned char var_5 = (unsigned char)249;
unsigned char var_6 = (unsigned char)219;
unsigned int var_8 = 545997474U;
long long int var_9 = 415276390620760056LL;
unsigned char var_10 = (unsigned char)66;
int zero = 0;
unsigned char var_11 = (unsigned char)107;
unsigned char var_12 = (unsigned char)246;
unsigned char var_13 = (unsigned char)59;
unsigned short var_14 = (unsigned short)16033;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
