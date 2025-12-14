#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 612935987U;
_Bool var_2 = (_Bool)0;
signed char var_6 = (signed char)43;
long long int var_11 = 5563100502262410777LL;
unsigned long long int var_14 = 14316707659294992728ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)52695;
unsigned long long int var_18 = 314607509199167491ULL;
void init() {
}

void checksum() {
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
