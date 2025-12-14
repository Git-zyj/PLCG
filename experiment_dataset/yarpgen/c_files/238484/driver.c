#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3041351321U;
long long int var_2 = -3604289885393969587LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 16278858513674172316ULL;
long long int var_9 = 4780599069452588487LL;
unsigned long long int var_17 = 4042715514745314492ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = -131818937;
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
