#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13888;
unsigned char var_4 = (unsigned char)181;
int var_7 = -805147791;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 3935150345376734833ULL;
unsigned int var_18 = 1476649416U;
signed char var_19 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
