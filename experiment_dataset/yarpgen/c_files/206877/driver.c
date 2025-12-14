#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
signed char var_2 = (signed char)85;
_Bool var_4 = (_Bool)0;
short var_6 = (short)8271;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-45;
unsigned long long int var_9 = 2426225788474997970ULL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)27504;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3511821984U;
unsigned int var_14 = 1432787731U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
