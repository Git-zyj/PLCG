#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 1058927921509080882ULL;
short var_6 = (short)-19064;
int var_7 = -775336197;
unsigned long long int var_8 = 1990274750970357077ULL;
unsigned long long int var_11 = 14254459961699926853ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_17 = 226459046;
unsigned int var_18 = 509288553U;
long long int var_19 = 2861572678472109666LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
