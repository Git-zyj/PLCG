#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1611018133385783307LL;
unsigned int var_5 = 2677405632U;
long long int var_6 = 6259090009108661073LL;
unsigned char var_11 = (unsigned char)79;
unsigned short var_19 = (unsigned short)17489;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3166817291U;
unsigned long long int var_22 = 7066955889352127526ULL;
void init() {
}

void checksum() {
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
