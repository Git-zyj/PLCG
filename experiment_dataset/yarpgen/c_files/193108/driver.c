#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2031277820;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)91;
unsigned char var_5 = (unsigned char)139;
unsigned short var_10 = (unsigned short)56282;
long long int var_11 = -1494593719344161976LL;
int zero = 0;
unsigned int var_13 = 1449058529U;
int var_14 = 1635633635;
void init() {
}

void checksum() {
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
