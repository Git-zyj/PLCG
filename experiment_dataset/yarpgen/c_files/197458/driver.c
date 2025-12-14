#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40323;
signed char var_2 = (signed char)62;
unsigned long long int var_3 = 11551349117474260892ULL;
signed char var_6 = (signed char)-20;
long long int var_10 = 3035979225870147631LL;
int zero = 0;
short var_11 = (short)23734;
int var_12 = -1590169902;
unsigned char var_13 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
