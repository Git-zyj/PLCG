#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
unsigned int var_1 = 3991910921U;
unsigned int var_2 = 3382236537U;
unsigned int var_3 = 1736908571U;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1604434924U;
signed char var_6 = (signed char)28;
int var_7 = -1044473880;
signed char var_10 = (signed char)-91;
int var_14 = -352662299;
int zero = 0;
short var_16 = (short)-12800;
unsigned int var_17 = 1196649981U;
short var_18 = (short)14203;
unsigned char var_19 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
