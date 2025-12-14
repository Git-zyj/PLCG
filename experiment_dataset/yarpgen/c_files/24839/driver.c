#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2084927048;
short var_5 = (short)9926;
long long int var_7 = 4968226833783570309LL;
int var_9 = 1366195201;
unsigned short var_18 = (unsigned short)16047;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-46;
long long int var_22 = -2105956123307072456LL;
signed char var_23 = (signed char)119;
short var_24 = (short)-16708;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
