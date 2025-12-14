#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_7 = -2004279569;
long long int var_9 = 7379222386836497394LL;
int var_10 = -427078835;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_15 = -1091039781290518835LL;
short var_16 = (short)-9258;
unsigned char var_17 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
