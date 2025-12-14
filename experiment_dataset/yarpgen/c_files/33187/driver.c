#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5826716662243799858LL;
unsigned char var_2 = (unsigned char)165;
unsigned long long int var_3 = 1840238609903114094ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_10 = (unsigned char)193;
int zero = 0;
unsigned char var_11 = (unsigned char)205;
unsigned char var_12 = (unsigned char)241;
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
