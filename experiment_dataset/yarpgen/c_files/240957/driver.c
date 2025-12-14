#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48247;
unsigned long long int var_1 = 15643118348244819032ULL;
signed char var_4 = (signed char)-87;
unsigned int var_5 = 1235422279U;
int var_6 = -81032515;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 979844717U;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)245;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)68;
short var_15 = (short)-10239;
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
