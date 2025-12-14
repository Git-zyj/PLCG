#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 89326275U;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 3299993042U;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
signed char var_11 = (signed char)92;
unsigned char var_12 = (unsigned char)211;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-104;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)118;
int zero = 0;
signed char var_19 = (signed char)13;
signed char var_20 = (signed char)29;
unsigned char var_21 = (unsigned char)180;
unsigned char var_22 = (unsigned char)105;
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
