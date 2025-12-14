#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
unsigned long long int var_1 = 7038609034290069667ULL;
unsigned char var_9 = (unsigned char)52;
int zero = 0;
unsigned long long int var_11 = 17980049329714303318ULL;
unsigned char var_12 = (unsigned char)146;
short var_13 = (short)22441;
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
