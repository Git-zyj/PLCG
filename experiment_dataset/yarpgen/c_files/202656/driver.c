#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14917778044180872077ULL;
long long int var_5 = -7899470345520349157LL;
unsigned int var_12 = 3338106263U;
unsigned short var_14 = (unsigned short)53227;
unsigned int var_15 = 4086807670U;
long long int var_16 = 3466575981155134741LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -8965090476881399407LL;
short var_20 = (short)-25434;
unsigned short var_21 = (unsigned short)28971;
unsigned long long int var_22 = 14745950341461974064ULL;
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
