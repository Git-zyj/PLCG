#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)3;
unsigned int var_4 = 202632520U;
unsigned char var_9 = (unsigned char)181;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)247;
int zero = 0;
long long int var_13 = 3363206267321585094LL;
short var_14 = (short)7541;
unsigned int var_15 = 3317822877U;
signed char var_16 = (signed char)-119;
void init() {
}

void checksum() {
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
