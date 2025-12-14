#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2138485685720452188LL;
unsigned long long int var_8 = 6981271110380796017ULL;
signed char var_9 = (signed char)-86;
int zero = 0;
short var_10 = (short)-1739;
unsigned short var_11 = (unsigned short)23891;
unsigned int var_12 = 2312801447U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
