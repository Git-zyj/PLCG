#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)4;
unsigned int var_6 = 203030769U;
unsigned int var_8 = 2519480539U;
short var_12 = (short)-19142;
unsigned int var_13 = 869264680U;
long long int var_19 = 2416255165738522488LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 3199958535161173766LL;
short var_22 = (short)28588;
void init() {
}

void checksum() {
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
