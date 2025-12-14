#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 874850442996242616ULL;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-118;
int var_17 = -1137652816;
int zero = 0;
unsigned short var_20 = (unsigned short)33821;
unsigned long long int var_21 = 13552549082749276428ULL;
unsigned long long int var_22 = 4164061705879004750ULL;
long long int var_23 = 6724750404997238027LL;
void init() {
}

void checksum() {
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
