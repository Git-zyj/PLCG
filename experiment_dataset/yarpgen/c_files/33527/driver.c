#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 382910722250607889ULL;
unsigned char var_3 = (unsigned char)66;
unsigned char var_5 = (unsigned char)51;
unsigned int var_7 = 3639910675U;
unsigned int var_10 = 3073868133U;
signed char var_18 = (signed char)21;
int zero = 0;
unsigned char var_19 = (unsigned char)88;
unsigned char var_20 = (unsigned char)108;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)26324;
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
