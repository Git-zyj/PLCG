#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = 759092461121949085LL;
int var_4 = 258612226;
long long int var_5 = 4968793117346321681LL;
long long int var_7 = -6583102681589332968LL;
long long int var_10 = 7891454606149928102LL;
int zero = 0;
unsigned char var_12 = (unsigned char)205;
unsigned long long int var_13 = 17027253793607821901ULL;
unsigned long long int var_14 = 15141557885162878258ULL;
unsigned char var_15 = (unsigned char)238;
_Bool var_16 = (_Bool)0;
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
