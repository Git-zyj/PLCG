#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1828342441212013553ULL;
signed char var_5 = (signed char)-76;
unsigned long long int var_7 = 6724198609023450547ULL;
unsigned long long int var_8 = 8461652638690850304ULL;
int var_10 = 1872591624;
signed char var_12 = (signed char)-93;
unsigned long long int var_13 = 1778512569613259025ULL;
int var_16 = 715864;
int zero = 0;
unsigned char var_19 = (unsigned char)36;
int var_20 = 2110263602;
int var_21 = 874469006;
signed char var_22 = (signed char)93;
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
