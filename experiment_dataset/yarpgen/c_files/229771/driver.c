#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -862584112239494414LL;
short var_2 = (short)29066;
_Bool var_3 = (_Bool)0;
long long int var_8 = -8180871086474467591LL;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)17;
unsigned long long int var_14 = 12668541422361577712ULL;
unsigned char var_15 = (unsigned char)6;
int var_16 = -942948065;
signed char var_18 = (signed char)-63;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-34;
unsigned long long int var_21 = 955951441980403085ULL;
short var_22 = (short)-21294;
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
