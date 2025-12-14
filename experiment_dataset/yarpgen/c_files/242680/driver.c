#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18422;
signed char var_2 = (signed char)75;
short var_5 = (short)-780;
signed char var_7 = (signed char)39;
long long int var_11 = 8620405137035302359LL;
int zero = 0;
signed char var_12 = (signed char)-72;
signed char var_13 = (signed char)-36;
void init() {
}

void checksum() {
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
