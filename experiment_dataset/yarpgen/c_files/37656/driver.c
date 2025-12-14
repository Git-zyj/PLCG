#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-47;
unsigned long long int var_3 = 1671294602313458625ULL;
signed char var_4 = (signed char)1;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-1;
unsigned short var_8 = (unsigned short)38195;
long long int var_9 = -8752287891791370733LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_13 = 1120628537;
long long int var_14 = -6392741068304312918LL;
unsigned long long int var_15 = 9926933406766949661ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
