#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
unsigned char var_1 = (unsigned char)213;
unsigned char var_3 = (unsigned char)238;
unsigned long long int var_5 = 1147812164234455857ULL;
unsigned int var_6 = 3741993762U;
short var_7 = (short)2588;
unsigned char var_8 = (unsigned char)243;
signed char var_9 = (signed char)35;
long long int var_10 = 3091505068139277273LL;
int zero = 0;
long long int var_11 = -4711972353248290550LL;
unsigned long long int var_12 = 3796738733263269245ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
