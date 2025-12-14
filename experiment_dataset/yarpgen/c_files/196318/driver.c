#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18364027703193871655ULL;
unsigned char var_2 = (unsigned char)60;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)182;
int zero = 0;
unsigned short var_12 = (unsigned short)31548;
unsigned long long int var_13 = 16253504889274036869ULL;
short var_14 = (short)19368;
unsigned short var_15 = (unsigned short)4127;
long long int var_16 = -2369533981175515460LL;
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
