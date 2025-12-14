#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)71;
unsigned char var_9 = (unsigned char)51;
long long int var_12 = -4272364220586021280LL;
unsigned short var_13 = (unsigned short)16584;
int zero = 0;
unsigned char var_20 = (unsigned char)190;
long long int var_21 = -5939169968222557056LL;
long long int var_22 = 2484002741779951523LL;
void init() {
}

void checksum() {
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
