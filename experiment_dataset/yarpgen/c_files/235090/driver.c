#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8763378349466355321LL;
signed char var_1 = (signed char)-39;
_Bool var_2 = (_Bool)1;
long long int var_3 = 4969940358414798169LL;
short var_5 = (short)-15534;
unsigned int var_7 = 3922411186U;
unsigned int var_10 = 2675027163U;
long long int var_14 = -4237935127744089184LL;
long long int var_15 = 851060611403480900LL;
int zero = 0;
short var_16 = (short)28607;
unsigned int var_17 = 2868031622U;
unsigned long long int var_18 = 4638350704240545520ULL;
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
