#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)227;
unsigned int var_11 = 1809456433U;
unsigned char var_14 = (unsigned char)135;
unsigned long long int var_15 = 6207229729113903548ULL;
int zero = 0;
short var_18 = (short)-6095;
_Bool var_19 = (_Bool)0;
long long int var_20 = -118565650644386303LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
