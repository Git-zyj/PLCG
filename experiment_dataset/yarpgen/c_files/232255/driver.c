#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9118;
unsigned char var_3 = (unsigned char)17;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1221333109U;
long long int var_21 = -8839323515927645711LL;
unsigned int var_22 = 288823274U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
