#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 3207137938851500115LL;
unsigned short var_8 = (unsigned short)47123;
signed char var_10 = (signed char)4;
signed char var_14 = (signed char)78;
long long int var_15 = 2069705174220041321LL;
signed char var_17 = (signed char)-41;
int zero = 0;
unsigned short var_18 = (unsigned short)19776;
signed char var_19 = (signed char)-98;
void init() {
}

void checksum() {
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
