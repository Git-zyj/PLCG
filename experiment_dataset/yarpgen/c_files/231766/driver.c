#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2981467708U;
unsigned char var_3 = (unsigned char)4;
_Bool var_4 = (_Bool)0;
int var_6 = -1897722653;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-594;
unsigned short var_13 = (unsigned short)47191;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-28295;
unsigned long long int var_17 = 14619621046280486629ULL;
unsigned long long int var_18 = 10447797383235472098ULL;
int var_19 = 512422297;
int zero = 0;
int var_20 = -374223289;
signed char var_21 = (signed char)114;
unsigned int var_22 = 3113145149U;
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
