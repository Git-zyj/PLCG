#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-92;
long long int var_2 = 2558798557236197174LL;
unsigned short var_8 = (unsigned short)41284;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-80;
long long int var_18 = -7747335535571950112LL;
long long int var_19 = -5542481691669168042LL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-91;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
