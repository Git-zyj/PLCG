#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7015;
signed char var_6 = (signed char)-57;
unsigned int var_11 = 4211670524U;
short var_12 = (short)14042;
int zero = 0;
long long int var_16 = 4193328414773431998LL;
unsigned long long int var_17 = 16225553800957588995ULL;
signed char var_18 = (signed char)58;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
long long int var_21 = 8622742375795922484LL;
signed char var_22 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
