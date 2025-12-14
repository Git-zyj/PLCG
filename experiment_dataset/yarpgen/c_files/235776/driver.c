#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1668338552;
int var_1 = -797010579;
signed char var_2 = (signed char)101;
unsigned char var_3 = (unsigned char)145;
long long int var_4 = 254860163590676122LL;
signed char var_5 = (signed char)89;
_Bool var_8 = (_Bool)0;
int zero = 0;
short var_10 = (short)30204;
signed char var_11 = (signed char)-23;
unsigned int var_12 = 238597743U;
long long int var_13 = 5252987139048294122LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
