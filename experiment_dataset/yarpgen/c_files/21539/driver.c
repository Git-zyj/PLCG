#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
unsigned int var_1 = 1414729710U;
unsigned int var_7 = 1191189664U;
_Bool var_8 = (_Bool)0;
int var_9 = -511380295;
int zero = 0;
signed char var_10 = (signed char)-53;
unsigned long long int var_11 = 9928015845005046938ULL;
short var_12 = (short)-31555;
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
