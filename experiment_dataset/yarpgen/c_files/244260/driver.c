#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = 6943715324684404174LL;
unsigned short var_7 = (unsigned short)59723;
signed char var_13 = (signed char)15;
unsigned int var_15 = 723475548U;
int zero = 0;
unsigned int var_16 = 3837010480U;
unsigned int var_17 = 1065760487U;
long long int var_18 = 285336245535756229LL;
unsigned char var_19 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
