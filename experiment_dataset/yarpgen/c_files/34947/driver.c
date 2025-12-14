#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41493;
short var_4 = (short)-7860;
unsigned short var_6 = (unsigned short)61398;
long long int var_7 = -4097188990053388874LL;
int zero = 0;
unsigned int var_13 = 3670232264U;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-104;
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
