#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8576698627260945767ULL;
unsigned short var_2 = (unsigned short)38573;
long long int var_3 = 2459950784179719846LL;
int var_5 = 902572354;
short var_6 = (short)-23618;
unsigned long long int var_11 = 7553955611164109906ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_14 = 5565127283920740867LL;
unsigned short var_15 = (unsigned short)5784;
unsigned short var_16 = (unsigned short)1184;
void init() {
}

void checksum() {
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
