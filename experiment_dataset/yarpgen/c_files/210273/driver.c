#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13089275247045096439ULL;
unsigned short var_1 = (unsigned short)63094;
short var_2 = (short)-734;
long long int var_3 = 8072752770234192106LL;
int var_4 = 2116335101;
signed char var_5 = (signed char)-77;
signed char var_6 = (signed char)123;
signed char var_7 = (signed char)100;
signed char var_8 = (signed char)-29;
int zero = 0;
short var_10 = (short)-19817;
long long int var_11 = 3569415819742713520LL;
signed char var_12 = (signed char)6;
signed char var_13 = (signed char)-69;
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
