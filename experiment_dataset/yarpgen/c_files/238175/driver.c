#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)24013;
_Bool var_3 = (_Bool)0;
short var_8 = (short)-24514;
signed char var_10 = (signed char)-46;
unsigned long long int var_16 = 13397421492388736647ULL;
int zero = 0;
signed char var_17 = (signed char)-44;
unsigned int var_18 = 3297474091U;
long long int var_19 = -3787366924014190962LL;
unsigned long long int var_20 = 13742269564074869885ULL;
void init() {
}

void checksum() {
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
