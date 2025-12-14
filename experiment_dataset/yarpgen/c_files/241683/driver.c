#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2411397098189239740ULL;
unsigned long long int var_3 = 7658378994568308311ULL;
unsigned long long int var_4 = 11104175604440209767ULL;
unsigned short var_5 = (unsigned short)23109;
unsigned short var_9 = (unsigned short)4893;
_Bool var_11 = (_Bool)0;
unsigned short var_15 = (unsigned short)21337;
unsigned long long int var_16 = 10905111389692659882ULL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)13447;
int zero = 0;
signed char var_19 = (signed char)-123;
unsigned short var_20 = (unsigned short)36745;
signed char var_21 = (signed char)-9;
int var_22 = 1666772555;
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
