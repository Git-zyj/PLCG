#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3908;
unsigned int var_2 = 3266236843U;
unsigned int var_3 = 2330655109U;
int var_4 = -1730588337;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)35847;
unsigned int var_10 = 4219246976U;
int zero = 0;
unsigned short var_15 = (unsigned short)18198;
unsigned int var_16 = 760624038U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
