#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2880433083736658592ULL;
unsigned char var_4 = (unsigned char)22;
long long int var_5 = -3996028259980791919LL;
signed char var_6 = (signed char)7;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)239;
int zero = 0;
unsigned long long int var_11 = 10914585059638144488ULL;
unsigned char var_12 = (unsigned char)147;
unsigned long long int var_13 = 10024565855680378377ULL;
void init() {
}

void checksum() {
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
