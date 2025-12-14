#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 19292650;
unsigned long long int var_8 = 11781748512024309752ULL;
unsigned int var_10 = 3197103804U;
signed char var_11 = (signed char)105;
unsigned int var_12 = 95871539U;
unsigned long long int var_14 = 1635524382176389219ULL;
long long int var_16 = -8391591513002093790LL;
signed char var_17 = (signed char)-79;
int var_19 = 2137853672;
int zero = 0;
short var_20 = (short)12412;
int var_21 = 199887536;
void init() {
}

void checksum() {
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
