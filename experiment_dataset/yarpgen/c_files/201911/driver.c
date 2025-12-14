#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1673010201;
unsigned long long int var_1 = 8079041362582471701ULL;
unsigned long long int var_3 = 16454069354394657821ULL;
short var_5 = (short)6609;
long long int var_7 = -6365564774360857630LL;
signed char var_8 = (signed char)-58;
unsigned int var_9 = 373106336U;
int zero = 0;
unsigned char var_12 = (unsigned char)151;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 8478194922732921817ULL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
