#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48380;
long long int var_2 = 4264921594966179607LL;
unsigned char var_3 = (unsigned char)61;
unsigned int var_6 = 1739828022U;
signed char var_10 = (signed char)77;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-36;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
