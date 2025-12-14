#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)9970;
unsigned int var_6 = 2702731505U;
unsigned int var_8 = 203907424U;
signed char var_12 = (signed char)30;
unsigned int var_15 = 1054398602U;
unsigned char var_16 = (unsigned char)138;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)3367;
unsigned char var_20 = (unsigned char)33;
unsigned short var_21 = (unsigned short)15740;
signed char var_22 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
