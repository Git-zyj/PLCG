#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -842860437;
long long int var_7 = -3153151031651085820LL;
_Bool var_10 = (_Bool)1;
unsigned int var_13 = 1243236064U;
unsigned long long int var_16 = 1873453373640871063ULL;
int zero = 0;
int var_19 = -1575258269;
unsigned char var_20 = (unsigned char)227;
short var_21 = (short)28723;
void init() {
}

void checksum() {
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
