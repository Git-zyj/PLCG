#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
_Bool var_1 = (_Bool)0;
unsigned char var_6 = (unsigned char)69;
int var_8 = -1362189311;
unsigned int var_11 = 517112741U;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 3254282804042585295LL;
short var_20 = (short)-21167;
unsigned long long int var_21 = 111222418284203713ULL;
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
