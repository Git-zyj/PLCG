#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8575185597299851584LL;
unsigned long long int var_7 = 14920545322909766444ULL;
unsigned char var_8 = (unsigned char)217;
int var_10 = -2132211705;
short var_11 = (short)16482;
unsigned char var_15 = (unsigned char)65;
short var_16 = (short)-27922;
int zero = 0;
unsigned char var_18 = (unsigned char)86;
_Bool var_19 = (_Bool)1;
long long int var_20 = -5941050992345232957LL;
short var_21 = (short)10970;
int var_22 = -115802531;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
