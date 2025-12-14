#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
unsigned long long int var_2 = 3414036170148956509ULL;
unsigned char var_3 = (unsigned char)69;
long long int var_4 = -6282187583028173325LL;
signed char var_7 = (signed char)-8;
unsigned long long int var_12 = 2157467215042840460ULL;
int zero = 0;
int var_14 = 724192199;
signed char var_15 = (signed char)81;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
