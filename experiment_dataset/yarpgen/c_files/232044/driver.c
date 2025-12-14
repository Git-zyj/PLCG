#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)31;
int var_3 = 1320389652;
unsigned int var_9 = 4006865212U;
unsigned int var_10 = 2361306153U;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-57;
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
