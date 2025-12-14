#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16379840312986899358ULL;
unsigned short var_6 = (unsigned short)51154;
unsigned short var_8 = (unsigned short)49371;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-8692;
unsigned int var_13 = 3656374277U;
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
