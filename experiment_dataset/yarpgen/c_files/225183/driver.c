#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -358735812;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)59721;
short var_13 = (short)-23380;
int zero = 0;
int var_20 = 2119385085;
signed char var_21 = (signed char)-45;
_Bool var_22 = (_Bool)0;
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
