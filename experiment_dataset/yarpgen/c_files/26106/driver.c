#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52972;
long long int var_3 = 8250812674339872228LL;
short var_8 = (short)-28091;
unsigned char var_9 = (unsigned char)189;
int zero = 0;
signed char var_14 = (signed char)-28;
unsigned char var_15 = (unsigned char)179;
unsigned int var_16 = 680251426U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
