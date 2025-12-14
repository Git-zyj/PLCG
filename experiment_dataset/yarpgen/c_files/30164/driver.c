#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 87861093U;
short var_6 = (short)-28500;
unsigned short var_7 = (unsigned short)40903;
unsigned long long int var_8 = 15776203502942850067ULL;
short var_11 = (short)14254;
int zero = 0;
int var_12 = -432795887;
long long int var_13 = 8284636174726653286LL;
int var_14 = -1035727985;
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
