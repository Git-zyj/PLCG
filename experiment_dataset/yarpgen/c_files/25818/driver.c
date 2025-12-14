#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 196495804U;
_Bool var_4 = (_Bool)0;
signed char var_8 = (signed char)33;
unsigned int var_10 = 1606039785U;
int var_11 = -532092369;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_16 = (short)1263;
short var_17 = (short)7331;
signed char var_18 = (signed char)-72;
unsigned long long int var_19 = 4211274532545656683ULL;
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
