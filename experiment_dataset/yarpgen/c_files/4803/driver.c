#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7024;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2707653783U;
int var_3 = -658668760;
short var_4 = (short)-21872;
short var_13 = (short)-6905;
long long int var_18 = 3178322289193925822LL;
int zero = 0;
long long int var_19 = 4470765023808488407LL;
unsigned int var_20 = 1522550178U;
unsigned long long int var_21 = 4888233807839349323ULL;
unsigned long long int var_22 = 9850442342930272358ULL;
unsigned short var_23 = (unsigned short)59499;
long long int var_24 = 2721045411104867276LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
