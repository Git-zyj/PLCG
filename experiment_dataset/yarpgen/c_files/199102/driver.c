#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)136;
_Bool var_4 = (_Bool)1;
short var_5 = (short)9084;
unsigned long long int var_8 = 17504272051115621559ULL;
unsigned int var_9 = 1547249870U;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-117;
int var_12 = 1134007435;
unsigned short var_13 = (unsigned short)31189;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
