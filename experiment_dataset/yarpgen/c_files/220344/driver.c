#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1539915091380414420ULL;
short var_6 = (short)30152;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-92;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)23;
signed char var_14 = (signed char)87;
unsigned int var_15 = 2373620952U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
