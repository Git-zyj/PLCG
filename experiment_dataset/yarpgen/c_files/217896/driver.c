#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)-105;
short var_7 = (short)20984;
short var_12 = (short)25736;
unsigned long long int var_13 = 11833327933593620154ULL;
int zero = 0;
signed char var_14 = (signed char)50;
long long int var_15 = 8012879682842898409LL;
unsigned long long int var_16 = 10338498789681918475ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
