#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)221;
int var_10 = -667053846;
short var_11 = (short)-773;
unsigned long long int var_15 = 4414753979197219535ULL;
unsigned int var_17 = 2185997036U;
int zero = 0;
signed char var_18 = (signed char)-29;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
