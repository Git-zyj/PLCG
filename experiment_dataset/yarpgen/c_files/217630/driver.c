#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_4 = (short)-12766;
int var_7 = 595530515;
long long int var_10 = 229173709781187523LL;
signed char var_13 = (signed char)-47;
unsigned int var_14 = 2194103384U;
unsigned int var_17 = 1820316775U;
int zero = 0;
int var_18 = 1919523375;
unsigned int var_19 = 3891418553U;
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
