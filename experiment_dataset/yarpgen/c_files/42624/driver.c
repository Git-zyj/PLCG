#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)468;
signed char var_2 = (signed char)-69;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)10880;
unsigned long long int var_9 = 11981533134355383670ULL;
signed char var_15 = (signed char)101;
short var_18 = (short)-18363;
int zero = 0;
unsigned char var_19 = (unsigned char)8;
short var_20 = (short)7124;
short var_21 = (short)22752;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
