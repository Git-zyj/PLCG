#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3667684648U;
short var_2 = (short)9210;
short var_9 = (short)-3636;
int var_10 = 259622651;
unsigned long long int var_13 = 16290159921283111301ULL;
unsigned long long int var_18 = 8185253686153246124ULL;
int zero = 0;
long long int var_20 = -1746133894499775903LL;
unsigned long long int var_21 = 748948444441206590ULL;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)103;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
