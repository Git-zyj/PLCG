#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4137796645283364135LL;
_Bool var_3 = (_Bool)1;
short var_5 = (short)25537;
long long int var_10 = -6405081167471511705LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 3175113829U;
signed char var_20 = (signed char)93;
unsigned short var_21 = (unsigned short)9334;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
