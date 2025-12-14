#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 973493877U;
unsigned short var_1 = (unsigned short)47456;
unsigned long long int var_2 = 1105527891315261093ULL;
signed char var_3 = (signed char)-50;
unsigned int var_5 = 4177075520U;
unsigned long long int var_7 = 15431734164469365462ULL;
unsigned long long int var_9 = 7954078861869007257ULL;
unsigned short var_12 = (unsigned short)42167;
signed char var_14 = (signed char)-95;
unsigned long long int var_16 = 9984133869021367321ULL;
unsigned short var_17 = (unsigned short)7835;
int zero = 0;
unsigned short var_19 = (unsigned short)23461;
unsigned long long int var_20 = 11262093585844387096ULL;
int var_21 = 340550885;
signed char var_22 = (signed char)24;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
