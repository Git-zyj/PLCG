#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1495756509;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)48731;
int zero = 0;
unsigned int var_10 = 4170030537U;
unsigned short var_11 = (unsigned short)26063;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
