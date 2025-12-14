#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1013327245;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)18070;
unsigned int var_8 = 3985342072U;
unsigned char var_13 = (unsigned char)254;
int zero = 0;
long long int var_15 = -2265029238737331687LL;
unsigned short var_16 = (unsigned short)37567;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
