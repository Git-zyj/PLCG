#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13118;
unsigned short var_2 = (unsigned short)39790;
short var_6 = (short)26991;
short var_8 = (short)-13396;
signed char var_10 = (signed char)104;
signed char var_14 = (signed char)6;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)30;
int zero = 0;
unsigned int var_18 = 66791860U;
long long int var_19 = 796935113650318094LL;
long long int var_20 = 4984100684697751960LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
