#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4988979926236290504LL;
unsigned long long int var_8 = 17728964494167766156ULL;
unsigned long long int var_15 = 8877391846589555777ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_17 = 130406451;
long long int var_18 = 7244693046957082092LL;
unsigned int var_19 = 1086713880U;
unsigned long long int var_20 = 3395428512127398820ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
