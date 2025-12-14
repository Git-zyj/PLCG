#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-26711;
unsigned int var_5 = 384060876U;
long long int var_12 = 8424060589108363603LL;
unsigned long long int var_14 = 17797465106199983064ULL;
int zero = 0;
long long int var_17 = 3196573799676876807LL;
unsigned long long int var_18 = 15631485544506630628ULL;
unsigned char var_19 = (unsigned char)224;
short var_20 = (short)-3838;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
