#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 466583257;
int var_1 = 1804251864;
signed char var_2 = (signed char)114;
unsigned long long int var_3 = 1090516888057334474ULL;
unsigned long long int var_4 = 11446347407955117849ULL;
int var_6 = 2051304364;
int var_9 = -1313282213;
int var_10 = -1215831180;
short var_12 = (short)11518;
signed char var_13 = (signed char)125;
int zero = 0;
short var_14 = (short)25374;
signed char var_15 = (signed char)20;
short var_16 = (short)-21859;
long long int var_17 = -1752592625413387933LL;
long long int var_18 = 1262124730643107694LL;
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
