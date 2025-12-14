#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_10 = 3677179646U;
unsigned int var_18 = 4281933660U;
int zero = 0;
signed char var_20 = (signed char)-39;
unsigned short var_21 = (unsigned short)37929;
unsigned short var_22 = (unsigned short)48438;
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
