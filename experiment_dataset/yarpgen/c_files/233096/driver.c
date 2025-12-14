#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 325898220U;
unsigned long long int var_6 = 458799554887479907ULL;
unsigned char var_7 = (unsigned char)95;
signed char var_8 = (signed char)-57;
short var_9 = (short)21933;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)159;
unsigned char var_15 = (unsigned char)60;
unsigned int var_16 = 1624702239U;
unsigned char var_17 = (unsigned char)179;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
