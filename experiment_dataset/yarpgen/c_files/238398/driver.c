#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26184;
unsigned long long int var_1 = 1812885490509200974ULL;
unsigned int var_2 = 3317656132U;
unsigned long long int var_6 = 17714844896150116263ULL;
unsigned int var_7 = 888694962U;
long long int var_8 = -3702574679955706223LL;
int var_9 = 955722033;
unsigned int var_12 = 1929811100U;
_Bool var_13 = (_Bool)1;
int var_14 = -229849631;
unsigned short var_15 = (unsigned short)49071;
int zero = 0;
int var_16 = 251759968;
short var_17 = (short)31256;
unsigned char var_18 = (unsigned char)196;
unsigned short var_19 = (unsigned short)25352;
unsigned short var_20 = (unsigned short)48313;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
