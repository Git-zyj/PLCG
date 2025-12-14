#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6261429997338471940LL;
_Bool var_2 = (_Bool)1;
short var_3 = (short)5450;
unsigned char var_6 = (unsigned char)210;
short var_7 = (short)-20365;
long long int var_8 = 6123605408840004531LL;
short var_9 = (short)-1068;
int zero = 0;
unsigned long long int var_11 = 666572159147321307ULL;
unsigned long long int var_12 = 6792569182593148633ULL;
unsigned int var_13 = 2638334709U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
