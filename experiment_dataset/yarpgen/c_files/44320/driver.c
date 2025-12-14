#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1020698592201990835LL;
unsigned short var_3 = (unsigned short)51069;
signed char var_5 = (signed char)78;
short var_6 = (short)21283;
signed char var_7 = (signed char)-48;
unsigned long long int var_8 = 8146676520524573214ULL;
signed char var_10 = (signed char)119;
unsigned int var_14 = 3579487923U;
short var_15 = (short)21518;
int zero = 0;
long long int var_17 = 2411882396334691516LL;
int var_18 = -1201167893;
int var_19 = 1322854933;
unsigned short var_20 = (unsigned short)15008;
int var_21 = -2068258672;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
