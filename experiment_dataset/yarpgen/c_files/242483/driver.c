#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_3 = (short)-11179;
long long int var_4 = -4017813688622198294LL;
_Bool var_5 = (_Bool)1;
long long int var_7 = 5582684500440330403LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_11 = 1313005533713843090LL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
