#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 623610619655495854ULL;
short var_2 = (short)27144;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned int var_9 = 2597767967U;
int var_10 = -1654192354;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)36233;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
