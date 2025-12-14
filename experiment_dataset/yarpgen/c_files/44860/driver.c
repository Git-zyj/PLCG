#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5988211641164544863LL;
long long int var_1 = 665781043851795297LL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_5 = 742964294540330243ULL;
unsigned short var_9 = (unsigned short)19885;
int zero = 0;
long long int var_10 = -5021720482843800503LL;
unsigned long long int var_11 = 13341135763645817262ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
