#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-98;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)125;
unsigned char var_10 = (unsigned char)210;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_17 = -780013704;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1363177016U;
int var_20 = 137349062;
unsigned long long int var_21 = 142822493939048832ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
