#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -41668119;
unsigned long long int var_3 = 4808203673173685957ULL;
signed char var_4 = (signed char)-31;
short var_5 = (short)16063;
signed char var_7 = (signed char)-5;
int zero = 0;
long long int var_11 = -388622381088980620LL;
signed char var_12 = (signed char)-125;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
