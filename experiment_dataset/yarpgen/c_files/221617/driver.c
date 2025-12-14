#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3261320398U;
int var_5 = -573554791;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)80;
int zero = 0;
unsigned long long int var_20 = 17902241263197439102ULL;
unsigned short var_21 = (unsigned short)2597;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
