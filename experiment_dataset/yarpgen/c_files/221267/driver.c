#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-25178;
long long int var_2 = -5574837080007766934LL;
short var_4 = (short)-10802;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 1890646799U;
short var_8 = (short)23369;
unsigned short var_9 = (unsigned short)12050;
int zero = 0;
long long int var_10 = 1340753503587191926LL;
short var_11 = (short)15833;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)44818;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
