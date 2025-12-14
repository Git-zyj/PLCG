#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1461151949996983709LL;
long long int var_1 = 8891037913273600304LL;
signed char var_2 = (signed char)97;
unsigned long long int var_3 = 876316175676237018ULL;
long long int var_6 = -4059611477395956659LL;
unsigned long long int var_8 = 13629765080659649886ULL;
long long int var_13 = 1430953235856909139LL;
unsigned long long int var_14 = 9306622320275900761ULL;
int zero = 0;
unsigned int var_16 = 2281718182U;
unsigned long long int var_17 = 187391714609076821ULL;
unsigned int var_18 = 2702931589U;
long long int var_19 = 3300832295534399561LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
