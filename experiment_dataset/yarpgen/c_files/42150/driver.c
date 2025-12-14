#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1947439297980528784LL;
unsigned char var_1 = (unsigned char)147;
signed char var_6 = (signed char)-81;
signed char var_15 = (signed char)-23;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_19 = -5099148169041226877LL;
long long int var_20 = -6145651648038150347LL;
long long int var_21 = -2687946050548388261LL;
unsigned long long int var_22 = 16118200189465914051ULL;
short var_23 = (short)16578;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
