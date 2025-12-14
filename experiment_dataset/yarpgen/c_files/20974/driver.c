#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11729;
unsigned short var_3 = (unsigned short)23195;
unsigned long long int var_5 = 8665419261635566192ULL;
unsigned int var_7 = 2260128516U;
short var_8 = (short)30637;
unsigned short var_9 = (unsigned short)47026;
_Bool var_12 = (_Bool)0;
unsigned short var_15 = (unsigned short)48180;
int zero = 0;
unsigned short var_17 = (unsigned short)34368;
unsigned long long int var_18 = 17594003044137249431ULL;
signed char var_19 = (signed char)-86;
long long int var_20 = -4374781853505052125LL;
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
