#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)125;
_Bool var_3 = (_Bool)1;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-17;
signed char var_13 = (signed char)7;
int zero = 0;
unsigned long long int var_18 = 16875488761514588453ULL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-32052;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
