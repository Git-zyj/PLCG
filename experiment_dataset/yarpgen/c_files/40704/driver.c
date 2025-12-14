#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)17126;
unsigned short var_5 = (unsigned short)48659;
signed char var_14 = (signed char)-46;
unsigned short var_16 = (unsigned short)17505;
unsigned char var_19 = (unsigned char)225;
int zero = 0;
long long int var_20 = 5173885616027052605LL;
unsigned int var_21 = 865370381U;
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
