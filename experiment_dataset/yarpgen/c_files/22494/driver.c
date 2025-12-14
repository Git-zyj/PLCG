#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31076;
_Bool var_4 = (_Bool)0;
unsigned long long int var_14 = 7805551734611604119ULL;
short var_16 = (short)-25797;
int zero = 0;
unsigned int var_18 = 1998194207U;
unsigned char var_19 = (unsigned char)102;
unsigned int var_20 = 691653906U;
short var_21 = (short)-31340;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
