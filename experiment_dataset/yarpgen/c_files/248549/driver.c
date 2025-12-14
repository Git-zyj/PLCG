#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-19;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)88;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int var_12 = -567839791;
signed char var_13 = (signed char)-100;
int var_14 = -1401876863;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
