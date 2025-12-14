#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 13893486679610066329ULL;
unsigned short var_7 = (unsigned short)18716;
signed char var_11 = (signed char)11;
unsigned char var_12 = (unsigned char)96;
int var_14 = -917365965;
int zero = 0;
unsigned int var_18 = 1973374495U;
unsigned long long int var_19 = 2234706671399689501ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
