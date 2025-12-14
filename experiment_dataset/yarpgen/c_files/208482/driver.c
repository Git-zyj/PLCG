#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14823534136825486036ULL;
unsigned short var_6 = (unsigned short)29611;
unsigned long long int var_8 = 9956932319649936686ULL;
int zero = 0;
unsigned long long int var_13 = 9520800250512126918ULL;
short var_14 = (short)-15049;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 4112679865786265273ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
