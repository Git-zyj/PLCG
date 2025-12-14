#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2381699067411715740LL;
short var_5 = (short)8564;
long long int var_6 = 5436688254978483511LL;
unsigned char var_7 = (unsigned char)28;
short var_8 = (short)1970;
short var_11 = (short)10271;
int zero = 0;
unsigned int var_12 = 3012200556U;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-110;
_Bool var_15 = (_Bool)0;
long long int var_16 = 4575688022766679099LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
