#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-110;
signed char var_4 = (signed char)94;
unsigned int var_8 = 2146515483U;
_Bool var_12 = (_Bool)1;
int var_13 = -20468761;
int zero = 0;
unsigned char var_18 = (unsigned char)152;
signed char var_19 = (signed char)-21;
unsigned short var_20 = (unsigned short)48064;
long long int var_21 = 7453294281870910935LL;
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
