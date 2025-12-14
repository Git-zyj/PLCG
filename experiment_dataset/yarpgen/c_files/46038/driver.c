#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1130556513U;
unsigned int var_2 = 686347052U;
_Bool var_3 = (_Bool)0;
_Bool var_12 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 2188735722209687184ULL;
int zero = 0;
int var_20 = 2055791038;
unsigned short var_21 = (unsigned short)8926;
void init() {
}

void checksum() {
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
