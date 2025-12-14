#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
_Bool var_1 = (_Bool)0;
unsigned int var_6 = 3343930288U;
int var_8 = 1959058391;
unsigned char var_11 = (unsigned char)8;
unsigned long long int var_15 = 6162611189473120423ULL;
unsigned long long int var_17 = 12733201269252215053ULL;
unsigned long long int var_18 = 2212212033557859487ULL;
int zero = 0;
long long int var_19 = -5455458615024435088LL;
signed char var_20 = (signed char)73;
unsigned char var_21 = (unsigned char)168;
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
