#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-114;
unsigned short var_2 = (unsigned short)1918;
signed char var_4 = (signed char)-94;
short var_5 = (short)-31082;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 546587924816280080ULL;
signed char var_10 = (signed char)117;
_Bool var_16 = (_Bool)1;
unsigned long long int var_19 = 12537207092484311382ULL;
int zero = 0;
long long int var_20 = -3485177567215188747LL;
long long int var_21 = -8444823084667164719LL;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)7;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
