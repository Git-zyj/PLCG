#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3393249031U;
short var_4 = (short)-27237;
unsigned short var_6 = (unsigned short)6727;
unsigned long long int var_10 = 1224554161219520929ULL;
int var_11 = -320720884;
unsigned char var_12 = (unsigned char)98;
unsigned char var_13 = (unsigned char)158;
_Bool var_14 = (_Bool)0;
long long int var_16 = 7721735000114009824LL;
long long int var_17 = -6582905866871188990LL;
int zero = 0;
unsigned int var_19 = 4122644952U;
unsigned long long int var_20 = 9757816306197772596ULL;
void init() {
}

void checksum() {
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
