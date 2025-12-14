#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)65;
signed char var_4 = (signed char)104;
signed char var_6 = (signed char)-36;
unsigned short var_7 = (unsigned short)12242;
unsigned int var_8 = 1412174796U;
unsigned int var_9 = 1361566497U;
int zero = 0;
short var_10 = (short)19340;
unsigned long long int var_11 = 4957234406243625859ULL;
signed char var_12 = (signed char)-35;
long long int var_13 = -1297613696218329531LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
