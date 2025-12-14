#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 256048146;
unsigned int var_4 = 1282653781U;
_Bool var_8 = (_Bool)1;
unsigned short var_13 = (unsigned short)32890;
signed char var_18 = (signed char)99;
int zero = 0;
signed char var_19 = (signed char)-78;
unsigned char var_20 = (unsigned char)140;
short var_21 = (short)1188;
signed char var_22 = (signed char)-15;
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
