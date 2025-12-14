#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -347370623;
unsigned short var_2 = (unsigned short)15994;
unsigned int var_4 = 4221986863U;
long long int var_5 = 1693957557085849035LL;
short var_6 = (short)14985;
int var_7 = -200272002;
long long int var_8 = 5705235555591673689LL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)7284;
unsigned short var_12 = (unsigned short)21731;
unsigned short var_13 = (unsigned short)20173;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
