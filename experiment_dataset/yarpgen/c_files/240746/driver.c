#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17879;
unsigned short var_2 = (unsigned short)45489;
short var_3 = (short)-13805;
signed char var_5 = (signed char)107;
int var_10 = 283809888;
int var_12 = -487378221;
unsigned int var_14 = 674856199U;
signed char var_18 = (signed char)-101;
int zero = 0;
unsigned char var_20 = (unsigned char)245;
int var_21 = -1101018713;
short var_22 = (short)-25178;
int var_23 = -1520738058;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
