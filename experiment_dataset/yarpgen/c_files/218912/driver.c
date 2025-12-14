#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 532694405341348444LL;
unsigned long long int var_1 = 17346604570341770243ULL;
unsigned int var_4 = 3934462554U;
unsigned int var_5 = 2313947479U;
long long int var_7 = 3922025278593770569LL;
unsigned long long int var_8 = 12286199306954642065ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)228;
unsigned char var_12 = (unsigned char)138;
long long int var_13 = 5710991924378052211LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
