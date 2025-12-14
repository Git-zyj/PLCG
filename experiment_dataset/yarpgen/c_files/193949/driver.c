#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12981308628813257285ULL;
int var_2 = -900100889;
unsigned short var_3 = (unsigned short)58576;
unsigned long long int var_7 = 6671210014370037960ULL;
unsigned long long int var_10 = 14450156046460500008ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)4072;
short var_18 = (short)8797;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
