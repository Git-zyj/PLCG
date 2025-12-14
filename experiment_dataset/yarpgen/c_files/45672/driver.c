#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16019571097860740569ULL;
long long int var_3 = -2369503659401465601LL;
unsigned int var_4 = 3933664401U;
unsigned int var_5 = 944657434U;
unsigned short var_6 = (unsigned short)4765;
unsigned int var_7 = 2586379298U;
int var_11 = -821010346;
unsigned long long int var_12 = 2510080564525893581ULL;
int var_13 = -787770914;
int zero = 0;
unsigned int var_14 = 1269783901U;
unsigned short var_15 = (unsigned short)45555;
unsigned int var_16 = 3781940910U;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 6825342800448955459ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
