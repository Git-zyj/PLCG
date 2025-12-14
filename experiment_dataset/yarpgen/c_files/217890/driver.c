#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)227;
unsigned long long int var_10 = 8896274372786041661ULL;
int var_14 = 526029458;
int zero = 0;
unsigned short var_19 = (unsigned short)3648;
signed char var_20 = (signed char)78;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)37767;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
