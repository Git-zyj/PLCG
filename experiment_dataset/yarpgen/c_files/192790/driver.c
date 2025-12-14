#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6993670323938898609ULL;
signed char var_4 = (signed char)-7;
unsigned short var_5 = (unsigned short)29704;
unsigned char var_7 = (unsigned char)100;
unsigned long long int var_8 = 15880156626321492319ULL;
unsigned char var_9 = (unsigned char)155;
int zero = 0;
short var_13 = (short)28454;
int var_14 = 513740015;
void init() {
}

void checksum() {
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
