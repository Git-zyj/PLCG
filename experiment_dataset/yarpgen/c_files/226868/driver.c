#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 1174170739538046909ULL;
short var_10 = (short)-2695;
long long int var_11 = 4117090646668006700LL;
long long int var_13 = -2225357082737399520LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-54;
signed char var_18 = (signed char)-28;
unsigned long long int var_19 = 11844983845242610493ULL;
void init() {
}

void checksum() {
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
