#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5163908206527134767ULL;
unsigned char var_2 = (unsigned char)62;
short var_5 = (short)10916;
unsigned long long int var_6 = 12585102562264677286ULL;
_Bool var_8 = (_Bool)0;
long long int var_9 = 7810605922731140308LL;
int zero = 0;
unsigned long long int var_10 = 1697539261284192645ULL;
long long int var_11 = 7534215158146070834LL;
unsigned long long int var_12 = 12301807678770644097ULL;
unsigned long long int var_13 = 13775007269250554860ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
