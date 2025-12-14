#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5461232522135883597LL;
long long int var_2 = 1178261793253380483LL;
long long int var_5 = -8693032015207248920LL;
long long int var_7 = 3258582629010349639LL;
long long int var_8 = -684042982369763785LL;
long long int var_10 = -484082032402479312LL;
long long int var_12 = 4615719982107898161LL;
long long int var_15 = 5179428087317660808LL;
long long int var_16 = -74746645267609206LL;
long long int var_17 = 2148369047679116579LL;
int zero = 0;
long long int var_18 = 8384991768970410472LL;
long long int var_19 = 1322520131052247300LL;
void init() {
}

void checksum() {
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
