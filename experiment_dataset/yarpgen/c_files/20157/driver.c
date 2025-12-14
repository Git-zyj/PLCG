#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
long long int var_4 = -4316049125449963768LL;
unsigned long long int var_7 = 7400931454238959763ULL;
signed char var_8 = (signed char)-38;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-119;
int var_20 = -669360659;
unsigned long long int var_21 = 11708182438982187362ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
