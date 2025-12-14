#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7568732588576133447LL;
int var_2 = 1203569995;
unsigned short var_3 = (unsigned short)47728;
short var_8 = (short)14851;
signed char var_10 = (signed char)-100;
long long int var_15 = -5229073382121304724LL;
unsigned long long int var_16 = 11842707394760395767ULL;
short var_18 = (short)-27653;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 13467377530216231891ULL;
signed char var_22 = (signed char)47;
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
