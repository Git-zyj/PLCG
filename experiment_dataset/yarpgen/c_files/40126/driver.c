#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 155023174;
short var_2 = (short)18658;
signed char var_5 = (signed char)29;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 530149476016311448ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_11 = 3616876671U;
int zero = 0;
unsigned long long int var_17 = 15542580685018650531ULL;
unsigned char var_18 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
