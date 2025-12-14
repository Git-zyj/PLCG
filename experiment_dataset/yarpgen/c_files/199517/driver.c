#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1252951031U;
signed char var_1 = (signed char)-97;
unsigned int var_2 = 408970278U;
unsigned short var_3 = (unsigned short)42053;
signed char var_5 = (signed char)115;
short var_8 = (short)23057;
unsigned short var_9 = (unsigned short)11806;
long long int var_10 = 2163503262568386753LL;
int zero = 0;
unsigned char var_12 = (unsigned char)199;
unsigned int var_13 = 367546058U;
unsigned char var_14 = (unsigned char)31;
signed char var_15 = (signed char)-39;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
