#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7451742645684903342LL;
long long int var_1 = 6395162279894164362LL;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-95;
signed char var_7 = (signed char)73;
int zero = 0;
int var_13 = -1413230193;
unsigned char var_14 = (unsigned char)91;
unsigned long long int var_15 = 3862632080580750787ULL;
int var_16 = 1657078401;
signed char var_17 = (signed char)-4;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
