#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18190;
int var_4 = -832126353;
int var_6 = 118036817;
_Bool var_8 = (_Bool)1;
int var_11 = 29795016;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 1114296480U;
_Bool var_21 = (_Bool)1;
int var_22 = 1329780141;
unsigned char var_23 = (unsigned char)146;
void init() {
}

void checksum() {
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
