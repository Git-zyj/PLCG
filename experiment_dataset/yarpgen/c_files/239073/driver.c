#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)64;
unsigned int var_11 = 3235549091U;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-43;
int var_18 = -1353124238;
int zero = 0;
unsigned short var_19 = (unsigned short)52329;
_Bool var_20 = (_Bool)0;
short var_21 = (short)17253;
int var_22 = 253329975;
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
