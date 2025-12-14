#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-3734;
unsigned char var_7 = (unsigned char)169;
unsigned char var_10 = (unsigned char)34;
int zero = 0;
unsigned char var_12 = (unsigned char)244;
long long int var_13 = 6724056270718269160LL;
signed char var_14 = (signed char)22;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
