#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6250231772133124141ULL;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
int var_14 = 1400410632;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)17259;
long long int var_17 = -4035925549038621121LL;
int zero = 0;
signed char var_19 = (signed char)87;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2831192251U;
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
