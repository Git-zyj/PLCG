#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 591981921414345067ULL;
short var_1 = (short)17256;
signed char var_2 = (signed char)-109;
_Bool var_3 = (_Bool)1;
long long int var_4 = 2197249380793623517LL;
signed char var_5 = (signed char)103;
long long int var_11 = 1223603678801537604LL;
unsigned int var_14 = 736116463U;
signed char var_15 = (signed char)-111;
unsigned long long int var_17 = 5007736873765163586ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)207;
unsigned short var_21 = (unsigned short)29607;
long long int var_22 = 2383459688328924104LL;
unsigned short var_23 = (unsigned short)58005;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
