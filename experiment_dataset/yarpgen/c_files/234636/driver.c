#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1084272833U;
unsigned char var_3 = (unsigned char)149;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 3474235409228122429ULL;
int var_11 = -934482079;
long long int var_13 = -1410012390203223471LL;
unsigned long long int var_14 = 18345561909997198014ULL;
long long int var_15 = 1479662622694256034LL;
int var_17 = -1264499289;
unsigned long long int var_18 = 11257087076713368891ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)26647;
long long int var_21 = -3278191183849023871LL;
unsigned char var_22 = (unsigned char)84;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
