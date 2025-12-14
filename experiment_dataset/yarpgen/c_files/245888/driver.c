#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)58;
int var_4 = -1108384984;
unsigned short var_5 = (unsigned short)35408;
unsigned short var_6 = (unsigned short)11102;
unsigned int var_8 = 4172312380U;
unsigned long long int var_10 = 10617759661965478598ULL;
unsigned char var_12 = (unsigned char)8;
unsigned long long int var_13 = 5820122598953742911ULL;
unsigned long long int var_16 = 14386749707828740578ULL;
int zero = 0;
long long int var_20 = -701529248395299341LL;
unsigned long long int var_21 = 18288874334586269382ULL;
_Bool var_22 = (_Bool)0;
int var_23 = -1053193614;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
