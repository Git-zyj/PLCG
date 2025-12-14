#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
unsigned int var_2 = 2559377517U;
unsigned long long int var_4 = 12622852879057411546ULL;
unsigned char var_6 = (unsigned char)236;
long long int var_8 = 7870539221014465354LL;
unsigned long long int var_9 = 5596333078609568527ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)137;
short var_15 = (short)14599;
long long int var_16 = 1103784275970655138LL;
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
