#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 193408372;
unsigned int var_3 = 4109336045U;
unsigned int var_8 = 2574717442U;
signed char var_9 = (signed char)-63;
_Bool var_11 = (_Bool)0;
long long int var_14 = -6665546601759068352LL;
unsigned short var_16 = (unsigned short)3561;
int zero = 0;
int var_20 = -1087159652;
int var_21 = -69425123;
signed char var_22 = (signed char)52;
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
