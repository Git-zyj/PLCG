#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
signed char var_12 = (signed char)-9;
signed char var_14 = (signed char)-125;
int var_15 = -625025837;
long long int var_16 = 1613055455367983251LL;
signed char var_17 = (signed char)-93;
_Bool var_18 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-90;
long long int var_20 = 5622641201925835582LL;
int var_21 = 37310349;
short var_22 = (short)32464;
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
