#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1885976349U;
_Bool var_2 = (_Bool)1;
long long int var_3 = -5401703961057072392LL;
unsigned int var_5 = 2006086748U;
unsigned short var_8 = (unsigned short)53351;
long long int var_10 = -5831726007585315100LL;
signed char var_11 = (signed char)-53;
unsigned char var_14 = (unsigned char)157;
unsigned long long int var_15 = 15481852872779273769ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)163;
unsigned long long int var_19 = 15598448629918840433ULL;
unsigned short var_20 = (unsigned short)46252;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
