#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -283921789;
unsigned short var_2 = (unsigned short)8093;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1697423618U;
unsigned int var_5 = 3071692494U;
unsigned long long int var_6 = 16059705832059170695ULL;
unsigned short var_8 = (unsigned short)46685;
int zero = 0;
unsigned long long int var_10 = 2994345415962194104ULL;
short var_11 = (short)6218;
int var_12 = -1501057771;
unsigned short var_13 = (unsigned short)35357;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
