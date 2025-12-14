#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)25256;
unsigned short var_5 = (unsigned short)27669;
unsigned short var_7 = (unsigned short)19599;
unsigned long long int var_11 = 10911545867642838161ULL;
short var_13 = (short)468;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 16772306563869678132ULL;
unsigned long long int var_18 = 1003088913944259958ULL;
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
