#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4743629106411092794LL;
short var_5 = (short)6072;
int var_10 = 1169097421;
short var_11 = (short)6770;
long long int var_12 = 3264762909632359389LL;
unsigned int var_13 = 1569591269U;
unsigned long long int var_14 = 381926216842631642ULL;
int var_15 = 938613879;
long long int var_16 = -1752132616572005689LL;
short var_17 = (short)26073;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 1867191047538164039ULL;
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
