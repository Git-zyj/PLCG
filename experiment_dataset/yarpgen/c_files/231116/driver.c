#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1178167405;
short var_4 = (short)10606;
unsigned int var_8 = 835420098U;
unsigned short var_16 = (unsigned short)30770;
int zero = 0;
short var_17 = (short)21363;
unsigned short var_18 = (unsigned short)36189;
unsigned short var_19 = (unsigned short)40340;
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
