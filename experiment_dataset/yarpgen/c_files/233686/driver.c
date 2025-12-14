#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 11586284683491530607ULL;
long long int var_7 = 7048807503696551892LL;
unsigned char var_8 = (unsigned char)47;
int var_10 = 98768878;
signed char var_13 = (signed char)-29;
long long int var_15 = -2904568209700574309LL;
unsigned char var_16 = (unsigned char)195;
int zero = 0;
short var_17 = (short)-5544;
_Bool var_18 = (_Bool)1;
int var_19 = 1477482154;
unsigned char var_20 = (unsigned char)185;
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
