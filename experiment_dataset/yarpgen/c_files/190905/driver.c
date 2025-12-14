#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1912776889;
short var_2 = (short)-14410;
short var_3 = (short)15446;
unsigned char var_5 = (unsigned char)247;
unsigned char var_7 = (unsigned char)151;
short var_8 = (short)291;
unsigned char var_9 = (unsigned char)170;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)40849;
unsigned short var_14 = (unsigned short)30433;
long long int var_15 = -708569758290219981LL;
unsigned long long int var_16 = 1126405924374680826ULL;
void init() {
}

void checksum() {
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
