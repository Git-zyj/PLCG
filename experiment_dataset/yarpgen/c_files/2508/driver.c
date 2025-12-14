#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)147;
unsigned long long int var_4 = 871760887199569730ULL;
signed char var_6 = (signed char)-5;
_Bool var_11 = (_Bool)1;
unsigned long long int var_14 = 3637749825094880070ULL;
int zero = 0;
signed char var_16 = (signed char)-15;
unsigned long long int var_17 = 7364086212514944230ULL;
unsigned char var_18 = (unsigned char)39;
unsigned int var_19 = 3487152993U;
unsigned char var_20 = (unsigned char)206;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
