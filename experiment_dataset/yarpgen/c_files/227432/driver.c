#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 523711941072727654LL;
int var_3 = -409950423;
unsigned long long int var_4 = 117988566114140947ULL;
signed char var_6 = (signed char)60;
signed char var_9 = (signed char)-91;
int zero = 0;
short var_16 = (short)-22548;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
