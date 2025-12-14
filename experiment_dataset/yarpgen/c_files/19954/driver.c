#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)32464;
long long int var_2 = -5916401707053751118LL;
_Bool var_5 = (_Bool)0;
long long int var_9 = 4607458316794325273LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 1933845468U;
signed char var_14 = (signed char)-117;
void init() {
}

void checksum() {
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
