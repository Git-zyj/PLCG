#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 482128531U;
int var_1 = 1638255512;
unsigned char var_3 = (unsigned char)110;
signed char var_4 = (signed char)21;
int var_5 = 1007651408;
int var_6 = -1933499653;
unsigned int var_7 = 492421646U;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)85;
long long int var_12 = -1936849808617296794LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
