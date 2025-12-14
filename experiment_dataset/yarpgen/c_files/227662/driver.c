#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
signed char var_4 = (signed char)89;
short var_5 = (short)21623;
unsigned char var_8 = (unsigned char)177;
unsigned short var_10 = (unsigned short)58259;
unsigned long long int var_14 = 2943313514716917151ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-76;
unsigned short var_17 = (unsigned short)13046;
unsigned long long int var_18 = 5833382412628073237ULL;
void init() {
}

void checksum() {
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
