#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-76;
_Bool var_3 = (_Bool)1;
long long int var_5 = 1901912999661687062LL;
_Bool var_6 = (_Bool)0;
short var_8 = (short)26623;
int var_10 = 53356646;
short var_11 = (short)28488;
unsigned int var_12 = 1074130383U;
unsigned long long int var_13 = 5562718956084396924ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-49;
signed char var_16 = (signed char)106;
_Bool var_17 = (_Bool)1;
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
