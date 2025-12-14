#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)124;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-60;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-93;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)115;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-8;
void init() {
}

void checksum() {
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
