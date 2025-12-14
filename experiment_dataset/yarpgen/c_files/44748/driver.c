#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)236;
unsigned char var_7 = (unsigned char)34;
signed char var_9 = (signed char)45;
unsigned long long int var_10 = 12784275976822683080ULL;
long long int var_12 = 8500246890713227998LL;
int zero = 0;
unsigned char var_16 = (unsigned char)107;
_Bool var_17 = (_Bool)1;
short var_18 = (short)2300;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
