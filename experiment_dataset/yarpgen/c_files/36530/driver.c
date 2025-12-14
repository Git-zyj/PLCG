#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3833839885U;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned int var_14 = 2912025495U;
unsigned int var_17 = 2035046063U;
int zero = 0;
signed char var_18 = (signed char)-57;
unsigned int var_19 = 3462426682U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
