#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)9098;
unsigned char var_4 = (unsigned char)239;
unsigned char var_9 = (unsigned char)129;
unsigned char var_12 = (unsigned char)224;
signed char var_14 = (signed char)17;
unsigned char var_18 = (unsigned char)40;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)-7440;
signed char var_21 = (signed char)-79;
unsigned long long int var_22 = 13151746311704159604ULL;
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
