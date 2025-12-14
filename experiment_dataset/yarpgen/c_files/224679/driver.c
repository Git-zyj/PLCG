#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 956865865U;
unsigned long long int var_3 = 11754693041895640817ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 690879521U;
unsigned short var_7 = (unsigned short)3785;
unsigned long long int var_9 = 1554596163450626613ULL;
signed char var_10 = (signed char)-78;
unsigned long long int var_11 = 784720043917639483ULL;
unsigned short var_14 = (unsigned short)7103;
int zero = 0;
int var_15 = 1921688909;
int var_16 = -552189858;
_Bool var_17 = (_Bool)1;
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
