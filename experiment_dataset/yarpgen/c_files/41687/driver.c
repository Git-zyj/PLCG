#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)97;
unsigned char var_7 = (unsigned char)61;
unsigned char var_8 = (unsigned char)88;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)39;
unsigned int var_14 = 191161756U;
long long int var_15 = 6873523532294424818LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
