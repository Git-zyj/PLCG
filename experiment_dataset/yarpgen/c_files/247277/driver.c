#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 515750475U;
unsigned long long int var_5 = 16773802565910109020ULL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)78;
int zero = 0;
signed char var_10 = (signed char)-11;
short var_11 = (short)4876;
signed char var_12 = (signed char)82;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
