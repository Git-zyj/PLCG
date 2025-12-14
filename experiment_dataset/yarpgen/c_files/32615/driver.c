#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 954843075;
unsigned short var_8 = (unsigned short)7688;
unsigned long long int var_12 = 16698213329386561190ULL;
unsigned short var_15 = (unsigned short)23531;
int zero = 0;
signed char var_20 = (signed char)46;
unsigned long long int var_21 = 6731100095999248869ULL;
signed char var_22 = (signed char)54;
void init() {
}

void checksum() {
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
