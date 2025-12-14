#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_5 = 5568054293855594484ULL;
_Bool var_6 = (_Bool)0;
short var_15 = (short)24732;
unsigned long long int var_17 = 15680108556984348251ULL;
int zero = 0;
signed char var_20 = (signed char)-25;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 3285909177167160626ULL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
