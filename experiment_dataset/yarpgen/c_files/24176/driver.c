#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3981;
signed char var_1 = (signed char)-34;
unsigned char var_3 = (unsigned char)209;
long long int var_5 = 2048431178682591518LL;
unsigned short var_9 = (unsigned short)28161;
int zero = 0;
short var_13 = (short)-12437;
long long int var_14 = 8716306736359111129LL;
unsigned short var_15 = (unsigned short)42569;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
