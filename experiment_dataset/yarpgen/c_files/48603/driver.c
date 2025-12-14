#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-29931;
unsigned int var_6 = 4289382107U;
long long int var_7 = -4856847129172172191LL;
signed char var_15 = (signed char)-117;
unsigned short var_18 = (unsigned short)65497;
int zero = 0;
short var_19 = (short)-29660;
signed char var_20 = (signed char)-41;
unsigned long long int var_21 = 4112919116849764884ULL;
void init() {
}

void checksum() {
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
