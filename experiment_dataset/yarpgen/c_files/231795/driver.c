#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -225702296799557083LL;
int var_2 = -40705747;
unsigned int var_3 = 2304556800U;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-52;
int zero = 0;
unsigned int var_12 = 1192847035U;
unsigned int var_13 = 1363105838U;
long long int var_14 = 7590733684959122235LL;
signed char var_15 = (signed char)123;
unsigned long long int var_16 = 2071310444896544233ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
