#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8612694897285482586ULL;
unsigned long long int var_5 = 11782033111315407453ULL;
signed char var_7 = (signed char)-44;
short var_8 = (short)16085;
unsigned long long int var_10 = 5857511105037923909ULL;
signed char var_14 = (signed char)-5;
unsigned long long int var_15 = 15579246521166216895ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -646979782;
_Bool var_18 = (_Bool)0;
int var_19 = 1329332843;
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
