#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 89322698;
_Bool var_1 = (_Bool)0;
signed char var_5 = (signed char)-40;
signed char var_9 = (signed char)69;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 4924641733229919900ULL;
_Bool var_19 = (_Bool)1;
long long int var_20 = -7967215526589680170LL;
unsigned int var_21 = 154421399U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
