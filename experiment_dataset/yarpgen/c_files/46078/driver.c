#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)30;
signed char var_4 = (signed char)-92;
unsigned short var_11 = (unsigned short)58950;
unsigned short var_12 = (unsigned short)51849;
int zero = 0;
unsigned short var_17 = (unsigned short)20823;
signed char var_18 = (signed char)62;
unsigned long long int var_19 = 11060706778473784976ULL;
signed char var_20 = (signed char)113;
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
