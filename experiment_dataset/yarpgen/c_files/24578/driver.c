#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)17;
int var_12 = -799748101;
long long int var_13 = 5793525234354171052LL;
long long int var_15 = 5674282295818431337LL;
int zero = 0;
unsigned long long int var_18 = 1808945721473642202ULL;
unsigned short var_19 = (unsigned short)5508;
signed char var_20 = (signed char)-66;
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
