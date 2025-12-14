#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44075;
_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)25307;
unsigned short var_7 = (unsigned short)63302;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)60260;
unsigned short var_11 = (unsigned short)2075;
unsigned short var_12 = (unsigned short)3349;
unsigned short var_14 = (unsigned short)36910;
int zero = 0;
unsigned short var_17 = (unsigned short)51582;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)49377;
signed char var_20 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
