#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
unsigned long long int var_1 = 11940768186642075157ULL;
unsigned short var_2 = (unsigned short)42073;
int var_3 = 192841788;
unsigned int var_4 = 1059022135U;
int var_5 = 1898706423;
unsigned int var_6 = 1624282702U;
int var_7 = -218652741;
signed char var_9 = (signed char)120;
short var_11 = (short)-31762;
long long int var_12 = 536401078948062071LL;
long long int var_13 = 7957767130538326796LL;
int var_14 = -832525282;
long long int var_15 = -2129951956826378959LL;
unsigned char var_16 = (unsigned char)111;
int zero = 0;
signed char var_17 = (signed char)-37;
_Bool var_18 = (_Bool)1;
int var_19 = 215997625;
void init() {
}

void checksum() {
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
