#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15015722371283607833ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3304347763U;
long long int var_8 = 5170484418736929692LL;
unsigned long long int var_13 = 14928538026426212451ULL;
long long int var_15 = -2135422415688503515LL;
unsigned char var_16 = (unsigned char)126;
int zero = 0;
unsigned long long int var_19 = 10550089905701508776ULL;
int var_20 = -1395297531;
int var_21 = -544705551;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
