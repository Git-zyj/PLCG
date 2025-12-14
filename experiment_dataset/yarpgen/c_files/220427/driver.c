#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5741092553928535062ULL;
unsigned int var_6 = 2272743990U;
unsigned short var_7 = (unsigned short)29414;
unsigned long long int var_8 = 11404087014897955892ULL;
signed char var_14 = (signed char)98;
signed char var_17 = (signed char)17;
unsigned short var_18 = (unsigned short)3875;
int zero = 0;
unsigned char var_20 = (unsigned char)132;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 222216268U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
