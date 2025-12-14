#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)7615;
signed char var_3 = (signed char)117;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3012416578U;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-23;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-4;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
