#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-23;
signed char var_3 = (signed char)88;
unsigned short var_6 = (unsigned short)21689;
unsigned int var_11 = 1444817819U;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 5438033441360985718LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
