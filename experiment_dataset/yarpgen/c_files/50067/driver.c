#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9019;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)202;
unsigned long long int var_6 = 16481213387222811399ULL;
long long int var_8 = 3933930977949172183LL;
int zero = 0;
int var_11 = -1683142487;
unsigned long long int var_12 = 7973217412902771796ULL;
unsigned char var_13 = (unsigned char)159;
signed char var_14 = (signed char)70;
unsigned int var_15 = 1590930416U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
