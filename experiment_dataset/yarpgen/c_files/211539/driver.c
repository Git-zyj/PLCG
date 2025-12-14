#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 7684942118472957649ULL;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)1;
short var_6 = (short)1008;
unsigned int var_8 = 2652167859U;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 710443962U;
int zero = 0;
signed char var_12 = (signed char)-68;
unsigned char var_13 = (unsigned char)16;
unsigned int var_14 = 3049024624U;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
