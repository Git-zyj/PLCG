#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
unsigned long long int var_4 = 7694780595266814318ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)56139;
signed char var_8 = (signed char)-49;
int var_9 = -1887096182;
unsigned long long int var_10 = 3377925154712615365ULL;
signed char var_12 = (signed char)124;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)941;
long long int var_15 = -1935281853385075422LL;
signed char var_16 = (signed char)59;
signed char var_17 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
