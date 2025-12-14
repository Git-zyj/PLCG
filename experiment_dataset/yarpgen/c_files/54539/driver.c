#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)102;
unsigned long long int var_7 = 11555867551236363649ULL;
unsigned long long int var_14 = 7798591825698175975ULL;
unsigned int var_15 = 1650065609U;
short var_16 = (short)14278;
unsigned char var_17 = (unsigned char)247;
int zero = 0;
unsigned char var_19 = (unsigned char)150;
unsigned int var_20 = 3132194463U;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 234727183U;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
