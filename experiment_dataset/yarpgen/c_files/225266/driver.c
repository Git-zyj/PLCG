#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-28602;
_Bool var_3 = (_Bool)1;
long long int var_7 = -3800275628108933410LL;
_Bool var_8 = (_Bool)0;
int var_15 = -1094377433;
int zero = 0;
signed char var_20 = (signed char)28;
unsigned int var_21 = 1159959587U;
signed char var_22 = (signed char)-83;
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
