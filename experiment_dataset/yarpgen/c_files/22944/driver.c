#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4732029688721711284LL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 757504686U;
unsigned long long int var_7 = 7981683232073665116ULL;
unsigned char var_10 = (unsigned char)186;
int zero = 0;
unsigned long long int var_11 = 16111351792642618140ULL;
signed char var_12 = (signed char)-76;
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
