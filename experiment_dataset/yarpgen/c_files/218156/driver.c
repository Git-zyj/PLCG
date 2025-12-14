#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)64;
unsigned long long int var_5 = 17728297603504997591ULL;
short var_6 = (short)6425;
unsigned int var_17 = 4004137873U;
unsigned short var_18 = (unsigned short)39794;
int zero = 0;
short var_19 = (short)22208;
int var_20 = 1958341639;
short var_21 = (short)-18339;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
