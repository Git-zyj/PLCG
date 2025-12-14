#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60224;
signed char var_4 = (signed char)-31;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)64618;
long long int var_15 = -4665566233363718187LL;
int zero = 0;
short var_16 = (short)3834;
unsigned int var_17 = 2532821186U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
