#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-10238;
long long int var_4 = 7890669555555041695LL;
long long int var_6 = -1038804958650653682LL;
unsigned short var_8 = (unsigned short)8064;
unsigned char var_9 = (unsigned char)8;
int zero = 0;
unsigned char var_10 = (unsigned char)224;
unsigned int var_11 = 3920302206U;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 46803654U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
