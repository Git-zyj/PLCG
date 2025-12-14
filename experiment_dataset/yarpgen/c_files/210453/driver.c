#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)6501;
unsigned short var_5 = (unsigned short)38469;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)112;
int zero = 0;
unsigned int var_12 = 2624879884U;
unsigned short var_13 = (unsigned short)21232;
void init() {
}

void checksum() {
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
