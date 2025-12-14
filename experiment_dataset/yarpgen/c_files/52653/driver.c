#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-21;
unsigned short var_15 = (unsigned short)59941;
unsigned char var_16 = (unsigned char)54;
int zero = 0;
unsigned long long int var_20 = 5760411874872996452ULL;
unsigned int var_21 = 3695355786U;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)35463;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
