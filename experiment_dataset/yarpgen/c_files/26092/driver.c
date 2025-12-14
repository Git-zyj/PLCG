#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7164431881454046520LL;
short var_2 = (short)10845;
unsigned int var_4 = 1495835629U;
signed char var_7 = (signed char)16;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_12 = 1120131829;
unsigned int var_13 = 3276590382U;
void init() {
}

void checksum() {
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
