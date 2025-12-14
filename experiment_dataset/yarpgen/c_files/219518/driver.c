#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1950588920637366530LL;
signed char var_5 = (signed char)-103;
long long int var_8 = 7658174574495261011LL;
_Bool var_10 = (_Bool)1;
short var_16 = (short)22351;
int zero = 0;
unsigned short var_20 = (unsigned short)5762;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 58705567U;
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
