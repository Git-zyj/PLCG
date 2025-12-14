#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 16361391U;
unsigned long long int var_1 = 12753569008108064650ULL;
int var_3 = 882015199;
_Bool var_6 = (_Bool)1;
short var_9 = (short)20580;
short var_10 = (short)17794;
_Bool var_11 = (_Bool)0;
int var_14 = -410197685;
unsigned int var_15 = 4234785952U;
int zero = 0;
unsigned long long int var_18 = 14890556598101436538ULL;
short var_19 = (short)8736;
int var_20 = 306629107;
signed char var_21 = (signed char)-67;
void init() {
}

void checksum() {
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
