#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)34188;
unsigned char var_2 = (unsigned char)238;
short var_5 = (short)12080;
unsigned short var_6 = (unsigned short)34856;
long long int var_7 = 1435055709751301064LL;
signed char var_8 = (signed char)-70;
unsigned int var_9 = 2587823408U;
long long int var_11 = -2309570764577271830LL;
int zero = 0;
signed char var_12 = (signed char)33;
unsigned char var_13 = (unsigned char)144;
unsigned long long int var_14 = 1494883293001102623ULL;
unsigned char var_15 = (unsigned char)47;
int var_16 = -619131526;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
