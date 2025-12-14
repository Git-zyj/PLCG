#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)98;
signed char var_9 = (signed char)-45;
int var_10 = -81914918;
int var_11 = -842827268;
unsigned int var_12 = 740992491U;
unsigned int var_14 = 1915101678U;
unsigned int var_18 = 2703132786U;
int zero = 0;
unsigned long long int var_19 = 11274028366991155863ULL;
unsigned short var_20 = (unsigned short)7582;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
