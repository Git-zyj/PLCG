#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2430756920986877867LL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 2421174791U;
unsigned int var_7 = 1595213951U;
short var_10 = (short)29007;
long long int var_11 = -671374942027801855LL;
unsigned int var_12 = 3558632761U;
unsigned int var_13 = 4120338037U;
int zero = 0;
signed char var_18 = (signed char)78;
short var_19 = (short)-10548;
unsigned long long int var_20 = 2379466894488641357ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
