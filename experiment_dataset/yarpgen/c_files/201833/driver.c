#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 4218246804211981985LL;
signed char var_4 = (signed char)22;
long long int var_5 = 8089247829312228385LL;
_Bool var_6 = (_Bool)1;
long long int var_9 = 8539196120681322524LL;
long long int var_11 = 5246200252546100320LL;
long long int var_12 = 3864791862851579812LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)25;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
