#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_6 = (short)8229;
int var_8 = 230934001;
unsigned char var_9 = (unsigned char)222;
unsigned char var_19 = (unsigned char)253;
int zero = 0;
unsigned char var_20 = (unsigned char)36;
unsigned int var_21 = 1069422576U;
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
