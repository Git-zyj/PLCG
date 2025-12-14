#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3141751975U;
int var_3 = -465193270;
int var_4 = -960654383;
long long int var_7 = 9099058933902278753LL;
unsigned int var_9 = 2882717206U;
unsigned int var_11 = 1312549414U;
int zero = 0;
unsigned int var_12 = 1626065116U;
unsigned short var_13 = (unsigned short)22414;
_Bool var_14 = (_Bool)0;
short var_15 = (short)8210;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
