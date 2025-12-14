#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_4 = (signed char)80;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 2168304552U;
signed char var_13 = (signed char)-37;
int zero = 0;
short var_19 = (short)-20147;
unsigned long long int var_20 = 6191283729114787641ULL;
int var_21 = -190647391;
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
