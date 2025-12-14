#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28214;
signed char var_5 = (signed char)-68;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)24;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_17 = -6208308344295824545LL;
unsigned int var_18 = 3123867384U;
unsigned int var_19 = 2710868980U;
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
