#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -1116298305259110353LL;
unsigned int var_8 = 2982784780U;
signed char var_10 = (signed char)-44;
short var_11 = (short)-10363;
int var_13 = 545984612;
int zero = 0;
unsigned int var_14 = 2426215546U;
long long int var_15 = -2768856626889930169LL;
long long int var_16 = 6598376764598704960LL;
int var_17 = -2114445634;
long long int var_18 = 2794303186762371700LL;
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
