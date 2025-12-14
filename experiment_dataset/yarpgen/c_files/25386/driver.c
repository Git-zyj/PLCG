#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)14;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 136088888643222258ULL;
signed char var_7 = (signed char)-100;
signed char var_8 = (signed char)-97;
unsigned long long int var_9 = 3743203413248847495ULL;
int zero = 0;
long long int var_10 = 3006208640696153965LL;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
