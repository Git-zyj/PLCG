#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1121505062588702696LL;
unsigned int var_2 = 3630672156U;
unsigned int var_3 = 2039670148U;
unsigned short var_4 = (unsigned short)28068;
signed char var_6 = (signed char)-5;
unsigned int var_7 = 2847493841U;
long long int var_9 = 3538891059518209050LL;
int zero = 0;
unsigned int var_11 = 2396708389U;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 961739144U;
unsigned int var_14 = 1885181593U;
short var_15 = (short)23042;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
