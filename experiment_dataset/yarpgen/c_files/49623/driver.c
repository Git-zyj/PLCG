#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8961439160347241507LL;
signed char var_7 = (signed char)85;
long long int var_11 = 2753977315367049950LL;
signed char var_12 = (signed char)109;
long long int var_14 = -4958362425802714058LL;
int zero = 0;
signed char var_18 = (signed char)-51;
signed char var_19 = (signed char)-115;
long long int var_20 = -6072510687808128083LL;
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
