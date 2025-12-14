#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-23;
unsigned long long int var_3 = 12599202445985512988ULL;
_Bool var_4 = (_Bool)0;
unsigned short var_9 = (unsigned short)4151;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 842423000U;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)63744;
void init() {
}

void checksum() {
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
