#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13356193245724473435ULL;
unsigned int var_9 = 3224912458U;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_19 = -9008278095899045566LL;
long long int var_20 = -1045021891021419397LL;
long long int var_21 = -536087065602905188LL;
void init() {
}

void checksum() {
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
