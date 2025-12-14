#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_5 = (unsigned short)53748;
long long int var_6 = -599216271873508599LL;
unsigned char var_9 = (unsigned char)86;
signed char var_10 = (signed char)-67;
long long int var_11 = -3373817604834788178LL;
int zero = 0;
long long int var_12 = -4251320335737400607LL;
unsigned long long int var_13 = 10509614864244094515ULL;
unsigned char var_14 = (unsigned char)243;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
