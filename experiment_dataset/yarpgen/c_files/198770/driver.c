#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)106;
signed char var_10 = (signed char)39;
signed char var_17 = (signed char)-25;
unsigned short var_18 = (unsigned short)37818;
int zero = 0;
unsigned char var_19 = (unsigned char)12;
short var_20 = (short)4090;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
