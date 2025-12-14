#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 480540034880587414ULL;
short var_8 = (short)11699;
signed char var_10 = (signed char)-102;
int zero = 0;
short var_17 = (short)-22286;
short var_18 = (short)-13307;
signed char var_19 = (signed char)-34;
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
