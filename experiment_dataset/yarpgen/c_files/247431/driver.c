#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-113;
signed char var_4 = (signed char)-86;
unsigned short var_5 = (unsigned short)4359;
unsigned short var_7 = (unsigned short)2949;
int zero = 0;
unsigned short var_10 = (unsigned short)45202;
unsigned int var_11 = 1054308370U;
unsigned char var_12 = (unsigned char)196;
unsigned long long int var_13 = 567461274376697124ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
