#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1230911095U;
int var_2 = 584078841;
int var_3 = 1637484746;
int var_5 = -766664066;
short var_6 = (short)18727;
long long int var_7 = -5929107217666749986LL;
long long int var_8 = -8819844265641833111LL;
int zero = 0;
long long int var_11 = 1010846626501960214LL;
short var_12 = (short)14219;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
