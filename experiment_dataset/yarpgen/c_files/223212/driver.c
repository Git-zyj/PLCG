#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -33005435;
int var_2 = -4082109;
short var_3 = (short)28763;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)32;
signed char var_10 = (signed char)-25;
unsigned int var_12 = 300602906U;
short var_16 = (short)28742;
int zero = 0;
unsigned char var_17 = (unsigned char)9;
unsigned short var_18 = (unsigned short)2495;
signed char var_19 = (signed char)-37;
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
