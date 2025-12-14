#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1223175639772133989LL;
unsigned long long int var_3 = 16641075633308429576ULL;
unsigned short var_8 = (unsigned short)39504;
short var_10 = (short)11155;
signed char var_11 = (signed char)-39;
unsigned long long int var_14 = 3366552717213381644ULL;
short var_15 = (short)10649;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)42556;
short var_21 = (short)-32430;
unsigned int var_22 = 3889875135U;
short var_23 = (short)21522;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
