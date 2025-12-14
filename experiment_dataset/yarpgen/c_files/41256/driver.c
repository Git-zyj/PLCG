#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)502;
signed char var_6 = (signed char)-44;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)96;
unsigned int var_9 = 1199760962U;
unsigned short var_11 = (unsigned short)59595;
int zero = 0;
short var_12 = (short)20649;
signed char var_13 = (signed char)-86;
void init() {
}

void checksum() {
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
