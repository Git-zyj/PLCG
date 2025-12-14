#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3257145438129022787LL;
signed char var_1 = (signed char)32;
signed char var_2 = (signed char)-37;
signed char var_3 = (signed char)34;
short var_4 = (short)-2386;
long long int var_5 = -5528899978200815757LL;
short var_9 = (short)-18950;
short var_11 = (short)-30269;
long long int var_12 = 1828826643134111021LL;
signed char var_13 = (signed char)-95;
int zero = 0;
long long int var_17 = 3449409658810269045LL;
signed char var_18 = (signed char)99;
void init() {
}

void checksum() {
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
