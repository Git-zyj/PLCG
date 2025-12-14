#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57870;
signed char var_3 = (signed char)56;
unsigned long long int var_5 = 1642540398297948339ULL;
short var_7 = (short)2548;
int var_9 = -391185101;
signed char var_10 = (signed char)-124;
int zero = 0;
unsigned short var_11 = (unsigned short)36816;
unsigned short var_12 = (unsigned short)13205;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
