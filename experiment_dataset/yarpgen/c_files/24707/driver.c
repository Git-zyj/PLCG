#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
int var_6 = 1511539667;
signed char var_9 = (signed char)-40;
long long int var_14 = 7741593168938367998LL;
unsigned char var_15 = (unsigned char)210;
int zero = 0;
long long int var_20 = -2418921156718603211LL;
unsigned char var_21 = (unsigned char)100;
void init() {
}

void checksum() {
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
