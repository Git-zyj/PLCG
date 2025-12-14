#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2625418970404599314ULL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-99;
unsigned short var_9 = (unsigned short)37084;
signed char var_13 = (signed char)-12;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-114;
void init() {
}

void checksum() {
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
