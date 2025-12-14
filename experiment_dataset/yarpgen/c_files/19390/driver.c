#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10668;
long long int var_8 = -7598194341422250912LL;
unsigned int var_9 = 1260419371U;
unsigned short var_10 = (unsigned short)61211;
unsigned int var_13 = 3143452834U;
unsigned int var_15 = 1738115161U;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_19 = -5855395584659864643LL;
signed char var_20 = (signed char)-98;
signed char var_21 = (signed char)94;
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
