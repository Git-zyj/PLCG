#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)6;
unsigned long long int var_5 = 15130406928287887654ULL;
long long int var_8 = -7176916066983141008LL;
long long int var_12 = 4327397807768015197LL;
long long int var_16 = 4362991648783568032LL;
long long int var_17 = -5112674340283169407LL;
long long int var_18 = -4113891357169956196LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 5101276565314885471ULL;
unsigned long long int var_22 = 8452930437306862328ULL;
long long int var_23 = 4816657880258654245LL;
unsigned short var_24 = (unsigned short)38029;
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
