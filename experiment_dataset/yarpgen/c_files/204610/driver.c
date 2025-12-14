#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12821835005444401400ULL;
signed char var_3 = (signed char)87;
int var_5 = 1551747365;
long long int var_8 = 3292916932318972982LL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-63;
_Bool var_15 = (_Bool)0;
short var_16 = (short)20441;
unsigned int var_17 = 2949353669U;
short var_18 = (short)-14048;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
