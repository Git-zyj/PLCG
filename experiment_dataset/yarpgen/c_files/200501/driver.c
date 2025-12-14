#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6531197559614352714LL;
signed char var_2 = (signed char)87;
_Bool var_3 = (_Bool)0;
unsigned char var_9 = (unsigned char)234;
int var_10 = 411769936;
short var_11 = (short)7196;
unsigned short var_12 = (unsigned short)13986;
int zero = 0;
int var_13 = 1425674779;
unsigned int var_14 = 4262208467U;
unsigned int var_15 = 2672312659U;
unsigned short var_16 = (unsigned short)9692;
short var_17 = (short)18596;
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
