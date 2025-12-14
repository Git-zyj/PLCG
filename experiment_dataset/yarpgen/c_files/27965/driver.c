#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5741262074706411255LL;
unsigned char var_4 = (unsigned char)57;
unsigned char var_7 = (unsigned char)80;
short var_8 = (short)18278;
signed char var_9 = (signed char)89;
unsigned int var_10 = 1876274572U;
unsigned long long int var_11 = 13668790077130083502ULL;
unsigned long long int var_12 = 4907181388026398982ULL;
int zero = 0;
int var_13 = -1614432814;
int var_14 = -669162706;
unsigned char var_15 = (unsigned char)140;
unsigned char var_16 = (unsigned char)79;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
