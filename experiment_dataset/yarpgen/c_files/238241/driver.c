#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-31;
short var_2 = (short)11933;
signed char var_3 = (signed char)56;
unsigned short var_6 = (unsigned short)4251;
signed char var_14 = (signed char)8;
int zero = 0;
signed char var_18 = (signed char)18;
unsigned short var_19 = (unsigned short)58706;
void init() {
}

void checksum() {
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
