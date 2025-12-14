#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2168038969U;
unsigned short var_6 = (unsigned short)278;
signed char var_7 = (signed char)-17;
unsigned int var_8 = 27807756U;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int var_13 = -1241269827;
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
