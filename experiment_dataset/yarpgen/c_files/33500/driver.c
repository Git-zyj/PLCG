#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 486181522;
_Bool var_1 = (_Bool)1;
int var_3 = -543675999;
unsigned int var_4 = 857697491U;
unsigned short var_6 = (unsigned short)55805;
unsigned int var_7 = 3363898423U;
unsigned short var_8 = (unsigned short)27223;
unsigned long long int var_10 = 901251596719432293ULL;
unsigned int var_11 = 3507493045U;
int var_13 = -872217492;
unsigned int var_15 = 2844772591U;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1381284255U;
int zero = 0;
signed char var_19 = (signed char)-119;
unsigned short var_20 = (unsigned short)4686;
unsigned long long int var_21 = 6925423157261773267ULL;
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
