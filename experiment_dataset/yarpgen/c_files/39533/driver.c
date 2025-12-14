#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30260;
unsigned char var_3 = (unsigned char)63;
int var_4 = 1654720935;
unsigned short var_5 = (unsigned short)40048;
unsigned short var_6 = (unsigned short)65176;
unsigned short var_7 = (unsigned short)33691;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int var_11 = -1900118223;
int zero = 0;
long long int var_12 = -8486641463718617464LL;
unsigned short var_13 = (unsigned short)18935;
int var_14 = -920544167;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
