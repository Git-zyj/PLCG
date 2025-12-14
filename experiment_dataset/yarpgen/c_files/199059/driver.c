#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = -8257123150048858363LL;
int var_7 = -1963196631;
long long int var_11 = 4447646959499586392LL;
unsigned char var_13 = (unsigned char)55;
signed char var_15 = (signed char)-112;
int zero = 0;
signed char var_18 = (signed char)41;
unsigned long long int var_19 = 12383232652324649215ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
