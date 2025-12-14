#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1372319143U;
int var_1 = 2070501520;
unsigned char var_2 = (unsigned char)58;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3396499185U;
unsigned char var_6 = (unsigned char)246;
short var_7 = (short)949;
unsigned int var_8 = 2809460685U;
unsigned short var_10 = (unsigned short)3791;
int zero = 0;
unsigned long long int var_11 = 17133017933850317555ULL;
unsigned int var_12 = 4562743U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
