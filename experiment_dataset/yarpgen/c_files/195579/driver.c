#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38025;
unsigned long long int var_17 = 15944060678415505891ULL;
int var_18 = -1542943263;
int zero = 0;
signed char var_20 = (signed char)-13;
short var_21 = (short)-4246;
unsigned int var_22 = 295248052U;
_Bool var_23 = (_Bool)1;
short var_24 = (short)4988;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
