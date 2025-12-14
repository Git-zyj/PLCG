#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)5;
signed char var_9 = (signed char)105;
int var_10 = -986680577;
int zero = 0;
long long int var_11 = 7983923497842184690LL;
unsigned char var_12 = (unsigned char)81;
unsigned char var_13 = (unsigned char)202;
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
