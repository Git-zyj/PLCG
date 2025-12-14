#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2661974284679091181LL;
unsigned short var_10 = (unsigned short)21836;
unsigned char var_12 = (unsigned char)191;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)205;
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
