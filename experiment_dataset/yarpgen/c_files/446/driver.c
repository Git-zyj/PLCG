#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)164;
long long int var_4 = 6988329937607491981LL;
_Bool var_6 = (_Bool)0;
long long int var_7 = -5401042156460556451LL;
short var_12 = (short)-11875;
short var_13 = (short)5960;
unsigned long long int var_14 = 1284632496039216019ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)27837;
signed char var_18 = (signed char)112;
void init() {
}

void checksum() {
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
