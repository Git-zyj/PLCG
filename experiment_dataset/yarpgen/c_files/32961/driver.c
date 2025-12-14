#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1322817676;
signed char var_4 = (signed char)9;
short var_5 = (short)8563;
int var_6 = -1060676633;
short var_7 = (short)21285;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-118;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 4092372858155804430ULL;
unsigned int var_12 = 2314258686U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
