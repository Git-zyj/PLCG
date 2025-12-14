#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1827548181864161994LL;
short var_2 = (short)18388;
unsigned char var_5 = (unsigned char)241;
unsigned long long int var_10 = 2257640875827496101ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)146;
signed char var_12 = (signed char)-16;
void init() {
}

void checksum() {
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
