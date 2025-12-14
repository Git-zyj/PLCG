#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -4295347884544192920LL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 3075348688765237838ULL;
unsigned long long int var_12 = 4434998007953136188ULL;
unsigned long long int var_14 = 5166558252615112800ULL;
unsigned int var_18 = 455128488U;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-87;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
