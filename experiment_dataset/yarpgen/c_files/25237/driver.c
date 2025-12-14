#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25324;
unsigned int var_1 = 2747788065U;
unsigned short var_5 = (unsigned short)38074;
unsigned int var_7 = 1439856078U;
int zero = 0;
unsigned short var_12 = (unsigned short)62049;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)114;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
