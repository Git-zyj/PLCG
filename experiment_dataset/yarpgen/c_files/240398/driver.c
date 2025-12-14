#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
long long int var_3 = 7407476719787071736LL;
unsigned short var_6 = (unsigned short)39210;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)86;
unsigned short var_12 = (unsigned short)60904;
unsigned int var_13 = 255393003U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
