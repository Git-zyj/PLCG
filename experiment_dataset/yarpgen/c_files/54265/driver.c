#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)56;
_Bool var_4 = (_Bool)0;
unsigned int var_11 = 1753951165U;
unsigned char var_16 = (unsigned char)198;
long long int var_17 = -8799614336587829757LL;
int zero = 0;
unsigned long long int var_18 = 16628243061239260643ULL;
signed char var_19 = (signed char)-54;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
