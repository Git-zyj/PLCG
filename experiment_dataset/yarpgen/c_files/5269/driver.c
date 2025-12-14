#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)42;
unsigned short var_3 = (unsigned short)32804;
short var_8 = (short)20078;
unsigned long long int var_9 = 11107631112613890762ULL;
signed char var_10 = (signed char)-20;
short var_11 = (short)-21373;
int zero = 0;
unsigned char var_12 = (unsigned char)19;
unsigned long long int var_13 = 7029319335712683524ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
