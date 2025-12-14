#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12179;
_Bool var_2 = (_Bool)1;
unsigned long long int var_5 = 16216995883045384648ULL;
short var_6 = (short)26719;
long long int var_7 = -4466993565437181763LL;
short var_8 = (short)21443;
signed char var_12 = (signed char)-47;
unsigned long long int var_13 = 16943948148090951679ULL;
int zero = 0;
signed char var_14 = (signed char)80;
unsigned long long int var_15 = 5207051095249272319ULL;
void init() {
}

void checksum() {
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
