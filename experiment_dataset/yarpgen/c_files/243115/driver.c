#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2294962197235069768ULL;
unsigned long long int var_3 = 17395816490629382775ULL;
short var_10 = (short)4398;
unsigned short var_13 = (unsigned short)28025;
unsigned int var_15 = 3402457221U;
unsigned char var_16 = (unsigned char)164;
int zero = 0;
signed char var_17 = (signed char)-109;
unsigned int var_18 = 753082942U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
