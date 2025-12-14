#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 182168599U;
signed char var_1 = (signed char)-12;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-54;
int var_6 = 1394115777;
short var_7 = (short)10139;
signed char var_10 = (signed char)101;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_14 = 3657367834185398449LL;
signed char var_15 = (signed char)-22;
_Bool var_16 = (_Bool)1;
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
