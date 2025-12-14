#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-42;
unsigned short var_5 = (unsigned short)53771;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)12195;
long long int var_9 = -5887741027563457279LL;
int zero = 0;
signed char var_13 = (signed char)-20;
unsigned int var_14 = 92605881U;
unsigned int var_15 = 3268356331U;
unsigned short var_16 = (unsigned short)54158;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
