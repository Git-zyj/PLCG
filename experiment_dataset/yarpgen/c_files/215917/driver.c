#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)11754;
unsigned long long int var_6 = 11380202082628163634ULL;
signed char var_7 = (signed char)-84;
int zero = 0;
unsigned char var_10 = (unsigned char)109;
int var_11 = 1628608873;
unsigned long long int var_12 = 11979105903728037560ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
