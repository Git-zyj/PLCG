#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5381934656874437471ULL;
short var_5 = (short)16701;
long long int var_7 = -332480542673198634LL;
unsigned short var_11 = (unsigned short)56841;
int var_17 = 1286684621;
unsigned long long int var_19 = 17661084131922726244ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)36659;
unsigned short var_21 = (unsigned short)19386;
unsigned int var_22 = 428660456U;
long long int var_23 = -539415177839366085LL;
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
