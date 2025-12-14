#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9157447190274162343LL;
unsigned char var_1 = (unsigned char)209;
long long int var_8 = -5683359181997410087LL;
short var_11 = (short)27514;
unsigned int var_12 = 4098740987U;
unsigned int var_14 = 141744578U;
signed char var_15 = (signed char)65;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)231;
signed char var_18 = (signed char)12;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
