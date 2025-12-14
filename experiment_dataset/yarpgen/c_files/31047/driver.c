#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6907967375922046358LL;
_Bool var_1 = (_Bool)1;
long long int var_2 = -7497981519185373710LL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)92;
int var_8 = -286913295;
unsigned int var_9 = 628420728U;
int zero = 0;
long long int var_12 = 1006824439471124411LL;
signed char var_13 = (signed char)73;
int var_14 = 1532094559;
void init() {
}

void checksum() {
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
