#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4159288810573973172LL;
signed char var_5 = (signed char)-27;
long long int var_6 = -5515391847353359458LL;
_Bool var_10 = (_Bool)1;
long long int var_11 = -3540588619422191384LL;
short var_12 = (short)-18636;
unsigned int var_13 = 2255988199U;
unsigned int var_14 = 3504176981U;
int var_15 = 2112037458;
int zero = 0;
unsigned long long int var_16 = 17874595077640670568ULL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int var_19 = 397474472;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
