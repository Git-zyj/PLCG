#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-124;
int var_9 = -302636144;
unsigned int var_14 = 2576023327U;
unsigned short var_16 = (unsigned short)37438;
int zero = 0;
short var_17 = (short)17033;
unsigned short var_18 = (unsigned short)64709;
signed char var_19 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
